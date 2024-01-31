set(gmusl-dir "${CMAKE_CURRENT_LIST_DIR}")
set(gmusl-project-root "${gmusl-dir}/../..")
cmake_path(NORMAL_PATH gmusl-project-root)
string(REGEX REPLACE "/$" "" gmusl-project-root "${gmusl-project-root}")

function(_musl_cmake__glob_files dstvar group arch)
    set(root "${gmusl-project-root}")
    file(GLOB arch-files "${root}/src/${group}/${arch}/*.s" "${root}/src/${group}/${arch}/*.S" "${root}/src/${group}/${arch}/*.c")
    file(GLOB raw-generic-files "${root}/src/${group}/*.c")
    file(GLOB h-files "${root}/src/${group}/*.h")
    foreach(arch-file IN LISTS arch-files)
        get_filename_component(arch-filename "${arch-file}" NAME_WLE)
        set("arch-filename-${arch-filename}" "1")
    endforeach()
    foreach(generic-file IN LISTS raw-generic-files)
        get_filename_component(generic-filename "${generic-file}" NAME_WLE)
        if(NOT "${arch-filename-${generic-filename}}")
            list(APPEND generic-files "${generic-file}")
        endif()
    endforeach()
    set("${dstvar}" ${arch-files} ${generic-files} ${h-files} PARENT_SCOPE)
endfunction()

set(_musl_cmake__src-groups
    "aio"
    "complex"
    "conf"
    "crypt"
    "ctype"
    "dirent"
    "env"
    "errno"
    "exit"
    "fcntl"
    "fenv"
    "include"
    "internal"
    "ipc"
    "ldso"
    "legacy"
    "linux"
    "locale"
    "malloc"
    "math"
    "misc"
    "mman"
    "mq"
    "multibyte"
    "network"
    "passwd"
    "prng"
    "process"
    "regex"
    "sched"
    "search"
    "select"
    "setjmp"
    "signal"
    "stat"
    "stdlib"
    "string"
    "temp"
    "termios"
    "thread"
    "time"
    "unistd")

set(musl_cmake__src-groups ${_musl_cmake__src-groups} "crt" "stdio" "glibc-compat")
list(SORT musl_cmake__src-groups)

function(musl_cmake__generate_musl_file_lists name-prefix arch)
    set(root "${gmusl-project-root}")
    foreach(group ${_musl_cmake__src-groups})
        _musl_cmake__glob_files("files-${group}" "${group}" "${arch}")
    endforeach()

    file(GLOB files-crt "${root}/crt/${arch}/*.s" "${root}/crt/Scrt1.c")
    set(files-no-libc-internals-crt)

    set(files-glibc-compat)
    file(GLOB files-no-libc-internals-glibc-compat
        "${root}/gmusl/src/glibc-compat/src/*.cpp"
        "${root}/gmusl/src/glibc-compat/src/*.hpp"
        "${root}/gmusl/src/glibc-compat/src/*.h")

    file(GLOB files-stdio "${root}/src/stdio/*.c" "${root}/src/stdio/*.h")
    file(GLOB files-no-libc-internals-stdio
        "${root}/src/stdio/*printf*.c")
    list(APPEND files-no-libc-internals-stdio
        "${root}/gmusl/src/glibc-compat/src/glibc-compat-c-std-io.cpp"
        "${root}/gmusl/src/glibc-compat/src/glibc-compat-c-std-io.h"
        "${root}/src/stdio/sscanf.c"
        "${root}/src/stdio/vsscanf.c"
        "${root}/src/stdio/vfscanf.c"
        "${root}/src/internal/stdio_impl.h"
        "${root}/src/stdio/open_memstream.c"
        "${root}/src/stdio/open_wmemstream.c")

    set(depends-on-libc-internals
        ## env
        "secure_getenv.c"

        ## linux
        "setgroups.c"
        "clone.c" ## __abort_lock??
        "membarrier.c" ## musl-synccall

        ## misc
        "issetugid.c" # depends on libc.secure
        "mntent.c" # depends on fscanf
        "syslog.c" # depends on LOCK/UNLOCK; this is easy enough to emulate, but it's not that important

        ## unistd
        "setegid.c" "setreuid.c" "setresgid.c" "setresuid.c" "setuid.c"
        "setxid.c" "setregid.c" "setgid.c" "seteuid.c" # musl-synccall

        ## internal
        "libc.c" # musl global state won't be present at all
        "shgetc.c" # musl-file
        "intscan.c" # musl-file
        "floatscan.c" # musl-file
        "getopt_long.c" # FIXME: musl-file
        "getopt.c" # FIXME: musl-file

        ## errno
        "strerror.c" # FIXME: depends on some __lctrans_cur thing (maybe not worth dealing with)
        "__errno_location.c" # depends on a thread-local errno slot; just use glibc's

        ## network
        "getaddrinfo.c" # glibc-namelookup
        "gethostbyaddr.c" # glibc-namelookup
        "gethostbyaddr_r.c" # glibc-namelookup
        "gethostbyname.c" # glibc-namelookup
        "gethostbyname2.c" # glibc-namelookup
        "gethostbyname2_r.c" # glibc-namelookup
        "gethostbyname_r.c" # glibc-namelookup
        "getnameinfo.c" # musl-file, glibc-namelookup

        "getservbyname.c" # musl-file
        "getservbyname_r.c" # musl-file
        "getservbyport.c" # musl-file
        "getservbyport_r.c" # musl-file

        "h_errno.c" # depends on a thread-local h_errno slot; just use glibc's
        "lookup_name.c" # musl-file, glibc-namelookup
        "lookup_serv.c" # musl-file, glibc-namelookup
        "res_init.c" # glibc-namelookup
        "res_mkquery.c" # glibc-namelookup
        "res_msend.c" # glibc-namelookup
        "res_query.c" # glibc-namelookup
        "res_querydomain.c" # glibc-namelookup
        "res_send.c" # glibc-namelookup
        "res_state.c" # glibc-namelookup
        "resolvconf.c" # musl-file, glibc-namelookup

        ## signal
        "psignal.c" # musl-file
        "sigaction.c" # __abort_lock, libc.threaded
        "signal.c" # depends on sigaction.c
        "sigrtmax.c" # use glibc's limits
        "sigrtmin.c" # use glibc's limits

        ## stdlib
        "strtod.c" # FIXME: musl-file
        "strtol.c" # FIXME: musl-file
        "wcstod.c" # FIXME: musl-file
        "wcstol.c" # FIXME: musl-file
        )
    foreach(file ${depends-on-libc-internals})
        set("depends-on-libc-internals--file-${file}" "1")
    endforeach()
    foreach(group ${_musl_cmake__src-groups})
        list(APPEND "musl-no-libc-internals-groups" "no-libc-internals-${group}")
        foreach(path ${files-${group}})
            get_filename_component(filename "${path}" NAME)
            if(NOT "${depends-on-libc-internals--file-${filename}}")
                list(APPEND "files-no-libc-internals-${group}" ${path})
            endif()
        endforeach()
    endforeach()

    set("files-no-libc-internals-aio") # depends on posix cancellation points. also posix aio is bad
    set("files-no-libc-internals-passwd") # goofy unix crud that doesn't matter for programs i care about
    set("files-no-libc-internals-prng") # prng-state
    set("files-no-libc-internals-ctype") # locale??
    set("files-no-libc-internals-multibyte") # locale??
    set("files-no-libc-internals-env") # depends on musl global state and non-modular musl assumptions
    set("files-no-libc-internals-exit") # depends on musl global state and non-modular musl assumptions
    set("files-no-libc-internals-ldso") # use glibc's dlopen; this is necessary to be able to reliably load "platform" gl/vulkan
    set("files-no-libc-internals-locale") # c and posix locales are gross
    set("files-no-libc-internals-process") # defer to glibc; too much work + need to understand possible races. also fork is a bad idea and so is atfork
    set("files-no-libc-internals-malloc") # defer to glibc; i suspect that it is common practice on elf systems to pass memory allocated with a crt malloc across dll boundaries, with the expectation that another module will use that same crt's free function
    set("files-no-libc-internals-temp") # __randname depends on a 'tid' tcb field. i don't use this stuff so defer to glibc instead
    set("files-no-libc-internals-time") # FIXME: enable the stuff that is actually useful; figure out a best-effort 64-bit-time-on-old-32-bit-glibc scheme
    #set("files-no-libc-internals-setjmp") # TODO: should glibc's setjmp headers and functions be used? i'm not aware of any software i care about that passes a jmp_buf across dll boundaries
    set("files-no-libc-internals-thread") # use glibc's pthread; this is necessary to cooperate with other dlls that expect glibc's thread control block

    set(all-groups
        ${_musl_cmake__src-groups}
        ${musl-no-libc-internals-groups}
        "stdio"
        "no-libc-internals-stdio"
        "crt"
        "no-libc-internals-crt"
        "glibc-compat"
        "no-libc-internals-glibc-compat")

    foreach(group ${all-groups})
        set("${name-prefix}-${group}" ${files-${group}} PARENT_SCOPE)
    endforeach()
endfunction()

################################################################################
## longer libc-internals notes:
################################################################################
#
## glibc-namelookup
#
# I'm deferring to glibc's implementation of these name lookup functions
# because of NSS (which is bad, but maybe the machine operator on this for some
# reason) or for general consistency with other programs on the same machine. I
# also don't personally care very much about this.
#
## musl-file
#
# This thing depends on musl's FILE layout, which isn't the same as glibc's.
#
## prng-state
#
# All the prng functions depend on global seed state. This global seed state
# isn't shared with glibc's; additionally, multiple dlls using embedded copies
# of musl won't share the seed state either. I don't really know if this is
# important or not, but why bother? Any serious program I'd write would would
# use its own prng with state explicitly passed around as a parameter, and the
# prng functions exist in very very old versions of glibc, so backwards and
# forwards compatibility shouldn't be an issue.
#
## musl-synccall
#
# This thing depends on __synccall, which is used to interrupt all threads
# launched by musl's pthread_create; each interrupted thread then runs a
# syscall before resuming execution of normal code. The problem is that gmusl
# uses glibc's pthread functions, because maintaining compatibility with other
# arbitrary glibc-using shared libraries requires using glibc's assumptions for
# thread control block layout, so there are no threads launched by musl's
# pthread_create in a normal gmusl program. So it's easier to just defer to
# glibc's (probably broken) implementation of each __synccall function; it
# seems to me that all of these functions are goofy crusty unix "security"
# functions and are not really relevant for the kind of program that would
# depend on dlopen or pthreads.
#
## musl-dlclose
#
# This code launches a task with clone() or with pthread_create, which is
# risky when musl is itself contained inside a shared library that can be
# unloaded with dlclose.

set(musl_cmake__compile-definitions
    "$<$<COMPILE_LANGUAGE:CXX,C>:_XOPEN_SOURCE=700>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:CRT>")

set(musl_cmake__compile-options
    "$<$<COMPILE_LANGUAGE:C>:-std=c99>"
    "$<$<COMPILE_LANGUAGE:CXX>:-std=c++11>"
    "-Wa,--noexecstack"
    "-fomit-frame-pointer"
    "$<$<COMPILE_LANGUAGE:CXX>:-fno-exceptions>"
    "$<$<COMPILE_LANGUAGE:CXX>:-fno-rtti>"
    "$<$<COMPILE_LANGUAGE:CXX>:-fno-threadsafe-statics>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-pipe>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fPIC>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-ffreestanding>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-nostdinc>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-semantic-interposition>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fstack-clash-protection>" # This has been part of win32 for over 30 years!
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fvisibility=hidden>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-ffunction-sections>" # Enable to get reasonable dead code elimination without link-time optimization. Also see ${gmusl-project-root}/configure for an explanation.
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fdata-sections>" # Enable to get reasonable dead data elimination without link-time optimization. Also see ${gmusl-project-root}/configure for an explanation.
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-stack-protector>" # See ${gmusl-project-root}/configure for an explanation.
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-strict-aliasing>" # See ${gmusl-project-root}/configure for an explanation.
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-plt>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-asynchronous-unwind-tables>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-unwind-tables>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-Wno-shift-op-parentheses>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-Wno-string-plus-int>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-Wno-ignored-attributes>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-Wno-parentheses>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-Wno-return-local-addr>"
    "$<$<COMPILE_LANGUAGE:CXX,C>:-Wno-unknown-warning-option>"
    "-Wno-unused-command-line-argument")


function(musl_cmake__detect_architecture dst)
    set(cputype "${CMAKE_SYSTEM_PROCESSOR}")
    string(TOLOWER "${cputype}" cputype)
    set(known-archs "x86_64" "i386" "aarch64")
    set("aliases-x86_64" "x86_64" "x86-64" "amd64" "x64")
    set("aliases-i386" "i386" "i586" "i686" "x86")
    set("aliases-aarch64" "aarch64" "arm64")
    foreach(known-arch ${known-archs})
        foreach(alias ${aliases-${known-arch}})
            set("alias-for-${alias}" "${known-arch}")
        endforeach()
    endforeach()
    set(arch "${alias-for-${cputype}}")
    message(STATUS "musl_cmake: CMAKE_SYSTEM_PROCESSOR is \"${CMAKE_SYSTEM_PROCESSOR}\".")
    message(STATUS "musl_cmake: setting ${dst} to \"${arch}\".")
    set("${dst}" "${arch}" PARENT_SCOPE)
endfunction()

function(musl_cmake__linux_elf_program_interpreter_path dst-interp dst-soname arch)
    set("iinfo-i386"    "/lib/ld-linux.so.2"          "ld-linux.so.2")
    set("iinfo-x86_64"  "/lib64/ld-linux-x86-64.so.2" "ld-linux-x86-64.so.2")
    set("iinfo-aarch64" "/lib/ld-linux-aarch64.so.1"  "ld-linux-aarch64.so.1") # https://sourceware.org/bugzilla/show_bug.cgi?id=25129
    if(NOT DEFINED "iinfo-${arch}")
        message(FATAL_ERROR "Missing PT_INTERP/SONAME values for architecture \"${arch}\".")
    endif()
    set("iinfo" "${iinfo-${arch}}")
    list(GET "iinfo" 0 "PT_INTERP")
    list(GET "iinfo" 1 "SONAME")
    message(STATUS "musl_cmake: setting ${dst-interp} to \"${PT_INTERP}\" for arch \"${arch}\"")
    message(STATUS "musl_cmake: setting ${dst-soname} to \"${SONAME}\" for arch \"${arch}\"")
    set("${dst-interp}" "${PT_INTERP}" PARENT_SCOPE)
    set("${dst-soname}" "${SONAME}" PARENT_SCOPE)
endfunction()

function(musl_cmake__create_glibc_linking_targets prefix elf-program-interpreter-soname)
    set(info-ld         "abi-ld.c"         "abi-ld.gnu-ld-version-script"         "${elf-program-interpreter-soname}" "no-fakename")
    set(info-libc       "abi-libc.c"       "abi-libc.gnu-ld-version-script"       "libc.so.6"                         "fakename")
    set(info-libdl      "abi-libdl.c"      "abi-libdl.gnu-ld-version-script"      "libdl.so.2"                        "fakename")
    set(info-libm       "abi-libm.c"       "abi-libm.gnu-ld-version-script"       "libm.so.6"                         "fakename")
    set(info-libpthread "abi-libpthread.c" "abi-libpthread.gnu-ld-version-script" "libpthread.so.0"                   "fakename")
    set(info-librt      "abi-librt.c"      "abi-librt.gnu-ld-version-script"      "librt.so.1"                        "fakename")
    set(glibc_libs "ld" "libc" "libdl" "libm" "libpthread" "librt")
    set(srcprefix "${root}/gmusl/src/glibc-compat/abistubs")
    foreach(lib IN LISTS glibc_libs)
        list(GET "info-${lib}" 0 srcfile)
        list(GET "info-${lib}" 1 version-script)
        list(GET "info-${lib}" 2 soname)
        list(GET "info-${lib}" 3 use-fakename)
        set(name "${prefix}${lib}")
        add_library("${name}" SHARED EXCLUDE_FROM_ALL)
        target_sources("${name}" PRIVATE "${srcprefix}/${srcfile}")
        if(version-script STREQUAL "none")
            set(voption "")
        else()
            set(voption "-Wl,--version-script,${srcprefix}/${version-script}")
        endif()
        target_link_options("${name}" PRIVATE
            "-Wl,-soname,${soname}"
            "${voption}"
            "-nostdlib" "-nostartfiles" "-nodefaultlibs")
        target_compile_options("${name}" PRIVATE ${musl_cmake__compile-options})
        set_target_properties("${name}" PROPERTIES NO_SONAME "true")
        if("${use-fakename}" STREQUAL "fakename")
            cmake_path(REMOVE_EXTENSION "soname" LAST_ONLY OUTPUT_VARIABLE "filename")
            set_target_properties("${name}" PROPERTIES OUTPUT_NAME "${filename}" SUFFIX "" PREFIX "")
        endif()
    endforeach()
endfunction()
