#load "str.cma";;

let for_list xs f = List.iter f xs
let for_seq xs f = Seq.iter f xs

type version = Version of (int * int * int option)
type symkind = Kind_func | Kind_data

exception Abort of string

let version_regexp = Str.regexp {|^\([a-zA-Z]+\)_\([0-9]+\)\.\([0-9]+\)\(\.[0-9]+\)?$|}
let parse_version (verstring : string) : ((string * version), string) result =
  let does_match = Str.string_match version_regexp verstring 0 in
  let parse_int str ctx =
    try int_of_string str
    with Failure _ -> raise (Abort (Printf.sprintf {|parse_version: %s: string "%s" couldn't be parsed as a base-10 decimal integer|} ctx str))
  in
  if does_match then (
    try
      let tag = Str.matched_group 1 verstring in
      let x = parse_int (Str.matched_group 2 verstring) "match-1" in
      let y = parse_int (Str.matched_group 3 verstring) "match-2" in
      let z =
        try
          let str = Str.matched_group 4 verstring in
          let str = String.sub str 1 (String.length str - 1) in
          let ver = parse_int str "match-3" in
          Some ver
        with Not_found -> None
      in
      Ok (tag, Version (x, y, z))
    with Abort err -> Error err
  )
  else Error (Printf.sprintf {|parse_version: string "%s" doesn't match version_regexp|} verstring)
let require_version (verstring : string) : version =
  match parse_version verstring with
  | Ok (tag, version) when tag = "GLIBC" -> version
  | Error err -> failwith (Printf.sprintf {|require_version: Error "%s"|} err)
  | Ok (tag, _version) -> failwith (Printf.sprintf {|require_version: unexpected non-GLIBC tag "%s" in verstring "%s"|} tag verstring)

module VersionOrd = struct
  type t = version
  let compare (Version (x, y, z)) (Version (a, b, c)) =
    match (z, c) with
    | _ when x < a -> -1
    | _ when x > a -> 1
    | _ when y < b -> -1
    | _ when y > b -> 1
    | (None, Some _) -> -1
    | (Some _, None) -> 1
    | (Some z, Some c) when z < c -> -1
    | (Some z, Some c) when z > c -> 1
    | _ -> 0
end

module VersionSet = Set.Make(VersionOrd)

let to_hashset xs = Hashtbl.of_seq (Seq.map (fun x -> (x, ())) (List.to_seq xs))
let ld_filter_syms = to_hashset ["malloc"; "free"; "realloc"; "calloc"]
let no_filter_syms = Hashtbl.create 0

let libs = [
  ("libc", no_filter_syms);
  ("libdl", no_filter_syms);
  ("libpthread", no_filter_syms);
  ("libm", no_filter_syms);
  ("librt", no_filter_syms);
  ("ld", ld_filter_syms);
]

let architectures =
  let v = require_version in
  let glibc_2_3_5 = v "GLIBC_2.3.5" in
  let glibc_2_4 = v "GLIBC_2.4" in
  let glibc_2_17 = v "GLIBC_2.17" in
  let glibc_2_27 = v "GLIBC_2.27" in
[
  ("x86_64/64"             , glibc_2_3_5 , "defined(__amd64__) && !defined(__ILP32__)");
  ("i386"                  , glibc_2_3_5 , "defined(__i386__)");
  ("aarch64"               , glibc_2_17  , "defined(__aarch64__)");
  ("arm/le"                , glibc_2_4   , "defined(__arm__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__");
  ("arm/be"                , glibc_2_4   , "defined(__arm__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__");
  ("riscv/rv64"            , glibc_2_27  , "defined(__riscv) && __riscv_xlen == 64");
  ("powerpc/powerpc64/le"  , glibc_2_17  , "defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__");
  ("powerpc/powerpc64/be"  , glibc_2_3_5 , "defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__");
  ("powerpc/powerpc32/fpu" , glibc_2_3_5 , "defined(__powerpc__) && !defined(__powerpc64__)");
]

let bracket open' close f =
  let x = open' () in
  try let r = f x in close x; r
  with e -> close x; raise e

let path_navigate_up (pathstr : string) : string option =
  try
    let last_ix = String.rindex pathstr '/' in
    Some (String.sub pathstr 0 last_ix)
  with
  | Not_found -> None

let read_abilist root arch abilist_filename =
  let path_candidates =
    let arch_to_path arch = Printf.sprintf "%s/%s/%s.abilist" root arch abilist_filename in
    let candidate = Printf.sprintf "%s/%s/%s.abilist" root arch abilist_filename in
    let fallback_candidate = Option.map arch_to_path (path_navigate_up arch) in
    Seq.cons candidate (Option.to_seq fallback_candidate)
  in
  let try_file path =
    try
      let inc = open_in_bin path in
      Result.Ok (bracket (fun () -> inc) close_in (fun inc ->
        let lines = ref [] in
        (try
          while true; do
            let line = input_line inc in
            lines := line :: !lines
          done
        with End_of_file -> ());
        let lines = !lines in
        List.rev lines))
    with (Sys_error _) as e ->
      Result.Error e
  in
  let results = Seq.map try_file path_candidates in
  let rec find_success xs last = match Seq.uncons xs with
  | Some (h, t) -> (match h with
    | Result.Ok ok -> ok
    | Result.Error err -> find_success t err)
  | None -> raise last
  in
  find_success results (Sys_error "empty array!")

let print_version (Version (x, y, z)) : string =
  let b = Buffer.create 16 in
  Buffer.add_string b "GLIBC_";
  Buffer.add_string b (string_of_int x);
  Buffer.add_char b '.';
  Buffer.add_string b (string_of_int y);
  (match z with
  | Some z ->
    Buffer.add_char b '.';
    Buffer.add_string b (string_of_int z)
  | None -> ());
  Buffer.contents b

let space_regexp = Str.regexp " "

let split_on_space (str : string) : string list = Str.split space_regexp str

let parse_abilist (abilist : string list) : (string * version * symkind) list =
  let handle_entry (entry : string) = match split_on_space entry with
    | [ver; sym; kind; _] (* e.g. GLIBC_2.12 _sys_errlist D 0x438 *)
    | [ver; sym; kind] ->
      let kind = match kind with
      | "F" -> Kind_func
      | "D" -> Kind_data
      | other -> failwith (Printf.sprintf {|unexpected symbol kind: "%s"|} other)
      in
      let ver = match parse_version ver with
      | Ok (tag, ver) -> (match tag with
        | "GLIBC" -> Some (sym, ver, kind)
        | other -> Printf.printf {|warning: unknown version tag; ignoring entry "%s"%s|} entry "\n"; None
        )
      | Error err -> failwith (Printf.sprintf {|parse_abilist: entry = "%s"; err = %s"|} entry err)
      in
      ver
    | _ -> failwith (Printf.sprintf {|parse_abilist: unrecognized entry; entry = "%s"|} entry)
  in
  List.filter_map handle_entry abilist

let index_abilist (abilist : (string * version * symkind) list) : (string, VersionSet.t * symkind) Hashtbl.t =
  let ret = Hashtbl.create 16 in
  let handle_entry (sym, version, kind) =
    let entry = Hashtbl.find_opt ret sym in
    let (versions, kind) = match entry with
    | Some (versions, stored_kind) when kind = stored_kind -> (versions, kind)
    | None -> (VersionSet.empty, kind)
    | Some (_, _) -> failwith (Printf.sprintf {|kind mismatch for symbol "%s"|} sym)
    in
    let versions = VersionSet.add version versions in
    Hashtbl.replace ret sym (versions, kind)
  in
  List.iter handle_entry abilist;
  ret

let process_group arch index syms target_version =
  let associate_sym_with_version sym =
    try
      let entry = Hashtbl.find_opt index sym in
      let (versions, kind) = match entry with
      | Some e -> e
      | None ->
          Printf.printf "process_group: symbol %s not found in architecture %s\n" sym arch;
          raise (Abort "")
      in
      let cmp_leq x = VersionOrd.compare x target_version <= 0 in
      let version_not_greater_than_target = match VersionSet.find_last_opt cmp_leq versions with
      | Some e -> e
      | None -> raise (Abort "")
      in
      Some (sym, version_not_greater_than_target, kind)
    with
      Abort _ -> None
  in
  let pinned_versions = List.filter_map associate_sym_with_version syms in
  pinned_versions

let create_file_for_writing dest f = bracket
  (fun () -> open_out_gen [Open_binary; Open_wronly; Open_trunc; Open_creat] 0o644 dest)
  close_out f

let preproc_directives = Seq.cons ("#if", "(") (Seq.repeat ("#elif", ") ("))

let print_c_source_file arch_pinned_sym_versions dest =
  create_file_for_writing dest (fun file ->
    let open Printf in
    let xs = Seq.zip preproc_directives (List.to_seq arch_pinned_sym_versions) in
    for_seq xs (fun ((preproc_directive, brace_match), (_architecture, guard, pinned_versions)) ->
      fprintf file "%s %s // %s\n" preproc_directive guard brace_match;
      for_list pinned_versions (fun (sym, _version, kind) ->
        let visibility = {|__attribute__((visibility("default")))|} in
        (match kind with
        | Kind_func -> fprintf file "    %s void %s_() { }\n" visibility sym
        | Kind_data -> fprintf file "    %s char %s_;\n" visibility sym));
      for_list pinned_versions (fun (sym, version, _kind) ->
        let version = print_version version in
        fprintf file "    __asm__(\".symver %s_, %s@@@%s\");\n" sym sym version);
      );
    fprintf file "#endif // )\n")

let print_gnu_ld_version_script (all_known_versions : version list) dest =
  create_file_for_writing dest (fun file ->
    let open Printf in
    let prev = ref None in
    for_list all_known_versions (fun version ->
      let version = print_version version in
      fprintf file "%s { }" version;
      (match !prev with
      | Some prev -> fprintf file " %s;" prev
      | None -> fprintf file ";");
      fprintf file "\n";
      prev := Some version)
  )

let run () =
  Printexc.record_backtrace true;
  let set_str r = Arg.String (fun x -> r := Some x) in
  let dest_dir : string option ref = ref None in
  let abilist_dir : string option ref = ref None in
  let argspec = [
    ("--dest-dir", set_str dest_dir, "Destination directory for generated files.");
    ("--abilist-dir", set_str abilist_dir, "Source directory for glibc abilist files.");
  ] in
  Arg.parse argspec (fun x -> ()) (Printf.sprintf "%s --dest-dir DIR --abilist-dir DIR" Sys.argv.(0));
  let require_arg descr arg = match arg with
  | Some x -> x
  | None -> failwith (Printf.sprintf "required argument %s not specified" descr)
  in
  let dest_dir = require_arg "--dest-dir" !dest_dir in
  let abilist_dir = require_arg "--abilist-dir" !abilist_dir in
  Printf.printf "dest_dir = %s; abilist_dir = %s\n" dest_dir abilist_dir;
  let process_abilist (abilist_basename, filter_syms) =
    let process_architecture versions (architecture, target_ver, c_preprocessor_guard) =
      let lines = read_abilist abilist_dir architecture abilist_basename in
      let parsed = parse_abilist lines in
      let parsed = List.filter (fun (name, _, _) -> not (Hashtbl.mem filter_syms name)) parsed in
      let indexed = index_abilist parsed in
      let syms = List.sort compare (List.of_seq (Hashtbl.to_seq_keys indexed)) in
      let pinned_versions = process_group architecture indexed syms target_ver in
      let versions = List.fold_left (fun acc (_sym, version, _kind) -> VersionSet.add version acc) versions pinned_versions in
      (versions, (architecture, c_preprocessor_guard, pinned_versions))
    in
    (abilist_basename, List.fold_left_map process_architecture VersionSet.empty architectures)
  in
  let processed = List.map process_abilist libs in
  for_list processed (fun (abilist_basename, (all_known_versions, architectures_to_syms)) ->
    let c_path = Printf.sprintf "%s/abi-%s.c" dest_dir abilist_basename in
    let ldscript_path = Printf.sprintf "%s/abi-%s.gnu-ld-version-script" dest_dir abilist_basename in
    let all_known_versions = List.of_seq (VersionSet.to_seq all_known_versions) in
    print_c_source_file architectures_to_syms c_path;
    print_gnu_ld_version_script all_known_versions ldscript_path);
  ()

;;

run ()
