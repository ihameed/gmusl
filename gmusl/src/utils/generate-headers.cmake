# This script generates architecture-specific alltypes.h and syscall.h files
# using alltypes.h.in and syscall.h.in as input. The generated files are safe
# to check in to source control; be sure to re-run this script if the source
# files change. I am assuming that the source files will infrequently change
# and that application programmer convenience (i.e., loading a project and
# getting fully-functional cross-referencing without needing to first run
# a build) is more important than modifying either alltypes.h.in or syscall.h.in
# with minimal friction.
#
# Execute this script by running:
#
#     cmake -Dgenerate-headers-target-dir=path/to/outdir -P generate-headers.cmake

set(_gh-srcdir "${CMAKE_CURRENT_LIST_DIR}")
set(_gh-prjroot "${_gh-srcdir}/../../..")

function(musl_expand_typedef_struct_union alltypes-h outvar)
    string(REGEX REPLACE "TYPEDEF ([^\n\r]*) ([^ \n\r\t]*);"
[=[#if defined(__NEED_\2) && !defined(__DEFINED_\2)
typedef \1 \2;
#define __DEFINED_\2
#endif
]=]
    alltypes-h "${alltypes-h}")

    string(REGEX REPLACE "STRUCT ([^ \n\r\t]*) ([^\n\r]*);"
[=[#if defined(__NEED_struct_\1) && !defined(__DEFINED_struct_\1)
struct \1 \2;
#define __DEFINED_struct_\1
#endif
]=]
    alltypes-h "${alltypes-h}")

    string(REGEX REPLACE "UNION ([^ \n\r\t]*) ([^\n\r]*);"
[=[#if defined(__NEED_union_\1) && !defined(__DEFINED_union_\1)
union \1 \2;
#define __DEFINED_union_\1
#endif
]=]
    alltypes-h "${alltypes-h}")
    set("${outvar}" "${alltypes-h}" PARENT_SCOPE)
endfunction()

function(musl_expand_syscall__NR arch outvar)
    file(READ "${_gh-prjroot}/arch/${arch}/bits/syscall.h.in" arch-syscall-h-in)
    string(REGEX REPLACE "__NR_" "SYS_" syscall-h "${arch-syscall-h-in}")
    set("${outvar}" "${syscall-h}" PARENT_SCOPE)
endfunction()

function(musl_make_bits_alltypes_h arch target-dir)
    file(READ "${_gh-prjroot}/arch/${arch}/bits/alltypes.h.in" arch-alltypes-h-in)
    file(READ "${_gh-prjroot}/include/alltypes.h.in" alltypes-h-in)
    string(CONCAT alltypes-h "${arch-alltypes-h-in}" "${alltypes-h-in}")
    musl_expand_typedef_struct_union("${alltypes-h}" alltypes-h)
    file(MAKE_DIRECTORY "${target-dir}/${arch}/bits")
    file(WRITE "${target-dir}/${arch}/bits/alltypes.h" "${alltypes-h}")
endfunction()

function(musl_make_bits_syscall_h arch target-dir)
    musl_expand_syscall__NR("${arch}" arch-syscall-h)
    file(MAKE_DIRECTORY "${target-dir}/${arch}/bits")
    file(WRITE "${target-dir}/${arch}/bits/syscall.h" "${arch-syscall-h}")
endfunction()

set(dummy-version-h [=[#define VERSION "0.0"]=])

function(musl_make_version_h arch target-dir)
    file(MAKE_DIRECTORY "${target-dir}/${arch}")
    file(WRITE "${target-dir}/${arch}/version.h" "${dummy-version-h}")
endfunction()

set(_musl-all-architectures
    "aarch64" "arm" "i386" "m68k" "microblaze" "mips" "mips64" "mipsn32" "or1k"
    "powerpc" "powerpc64" "riscv64" "s390x" "sh" "x32" "x86_64")

set(_gmusl-architectures
    "aarch64" "arm" "i386" "powerpc" "powerpc64" "riscv64" "x86_64")

set("_gm-aarch64" "defined(__aarch64__)")
set("_gm-arm" "defined(__arm__)")
set("_gm-i386" "defined(__i386__)")
set("_gm-powerpc" "defined(__powerpc__) && !defined(__powerpc64__)")
set("_gm-powerpc64" "defined(__powerpc64__)")
set("_gm-riscv64" "defined(__riscv) && __riscv_xlen == 64 && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__")
set("_gm-x86_64" "defined(__amd64__)")

function(musl_generate_arch_headers target-dir)
    foreach(arch IN LISTS _musl-architectures)
        musl_make_bits_alltypes_h("${arch}" "${target-dir}")
        musl_make_bits_syscall_h("${arch}" "${target-dir}")
        musl_make_version_h("${arch}" "${target-dir}")
    endforeach()
endfunction()

function(musl_generate_amalgamated_arch_headers target-dir)
    file(READ "${_gh-prjroot}/include/alltypes.h.in" alltypes-h-in)
    musl_expand_typedef_struct_union("${alltypes-h-in}" generic-alltypes-h)
    set(preproc-begin "#if 0 /* { */\n")
    set(preproc-end [=[#else /* } { */
#error "Unknown architecture"
#endif /* } */
]=])
    set(amalgamated-alltypes-h "${preproc-begin}")
    set(amalgamated-syscall-h "${preproc-begin}")
    foreach(arch IN LISTS _gmusl-architectures)
        if(NOT DEFINED _gm-${arch})
            message(FATAL_ERROR "Missing _gm-${arch}")
        endif()
        file(READ "${_gh-prjroot}/arch/${arch}/bits/alltypes.h.in" arch-alltypes-h-in)
        set(preprocessor-guard "${_gm-${arch}}")
        musl_expand_typedef_struct_union("${arch-alltypes-h-in}" arch-alltypes-h)
        string(APPEND amalgamated-alltypes-h "#elif ${preprocessor-guard} /* } { */\n")
        string(APPEND amalgamated-alltypes-h "${arch-alltypes-h}")
        musl_expand_syscall__NR("${arch}" arch-syscall-h)
        string(APPEND amalgamated-syscall-h "#elif ${preprocessor-guard} /* } { */\n")
        string(APPEND amalgamated-syscall-h "${arch-syscall-h}")
    endforeach()
    string(APPEND amalgamated-alltypes-h "${preproc-end}")
    string(APPEND amalgamated-alltypes-h "\n${generic-alltypes-h}")
    string(APPEND amalgamated-syscall-h "${preproc-end}")
    file(MAKE_DIRECTORY "${target-dir}/bits")
    file(WRITE "${target-dir}/bits/alltypes.h" "${amalgamated-alltypes-h}")
    file(WRITE "${target-dir}/bits/syscall.h" "${amalgamated-syscall-h}")
    file(WRITE "${target-dir}/version.h" "${dummy-version-h}")
endfunction()

if(NOT DEFINED generate-headers-target-dir)
    message(FATAL_ERROR "Missing -Dgenerate-headers-target-dir.")
endif()

#musl_generate_arch_headers("${generate-headers-target-dir}")
musl_generate_amalgamated_arch_headers("${generate-headers-target-dir}")
