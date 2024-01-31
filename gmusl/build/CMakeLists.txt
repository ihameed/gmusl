# 3.20: cmake_path
cmake_minimum_required(VERSION 3.20)
project("gmusl" LANGUAGES CXX ASM ASM_MASM C)
option("gmusl-demo-no-external-debuginfo" "Do not used externalized debug symbols.")
option("gmusl-demo-dump-assembly" "Dump intermediate data (including assembly files) generated during compilation.")

# CMake, during "compiler abi detection", will create a list of libraries that
# are "implicitly linked" when a simplistic test program is compiled and linked
# using what I presume are default options. These implicit link libraries are
# then appended to the linker command line by CMake. My system appears to
# automatically include libstdc++ and libm, so they're explicitly removed
# here.
#
# See:
# - Modules/CMakeParseImplicitLinkInfo.cmake
# - Modules/CMakeDetermineCompilerABI.cmake
# - Source/cmComputeLinkInformation.cxx (cmComputeLinkInformation::AddImplicitLinkInfo)
list(REMOVE_ITEM CMAKE_CXX_IMPLICIT_LINK_LIBRARIES stdc++ m)

include("gmusl.cmake")
set(root "${gmusl-project-root}")

include(CheckCXXCompilerFlag)
include(CheckCCompilerFlag)
check_cxx_compiler_flag("-nostdlib++" gnu-nostdlib-cpp)
check_c_compiler_flag("-fno-stack-protector" gnu-fno-stack-protector)
check_c_compiler_flag("--start-no-unused-arguments" clang-snua)

musl_cmake__detect_architecture("musl-arch")
musl_cmake__generate_musl_file_lists("musl-files" "${musl-arch}")
musl_cmake__linux_elf_program_interpreter_path("musl-program-interpreter" "musl-program-interpreter-soname" "${musl-arch}")
musl_cmake__create_glibc_linking_targets("abi-" "${musl-program-interpreter-soname}")

function(_def_lib_musl_full_static)
    set(target "lib-musl-full-static")
    add_library("${target}" STATIC)

    target_sources("${target}" PRIVATE ${musl-files-crt})
    foreach(group ${musl_cmake__src-groups})
        target_sources("${target}" PRIVATE ${musl-files-${group}})
    endforeach()
    target_include_directories("${target}" BEFORE PRIVATE
        "${root}/gmusl/src/generated-headers"
        "${root}/arch/${musl-arch}"
        "${root}/arch/generic"
        "${root}/src/include"
        "${root}/src/internal"
        "${root}/include"
        )
    target_compile_definitions("${target}" PRIVATE
        ${musl_cmake__compile-definitions})
    target_compile_options("${target}" PRIVATE
        ${musl_cmake__compile-options})
    set_source_files_properties("${root}/src/env/__libc_start_main.c" PROPERTIES COMPILE_FLAGS "-fno-stack-protector")
endfunction()
_def_lib_musl_full_static()

function(_def_lib_musl_partial_static)
    set(target "lib-musl-partial-static")
    add_library("${target}" STATIC)

    foreach(group ${musl_cmake__src-groups})
        target_sources("${target}" PRIVATE ${musl-files-no-libc-internals-${group}})
    endforeach()
    target_include_directories("${target}" BEFORE PRIVATE
        "${root}/gmusl/src/glibc-compat/include"
        "${root}/gmusl/src/generated-headers"
        "${root}/arch/${musl-arch}"
        "${root}/arch/generic"
        "${root}/src/include"
        "${root}/src/internal"
        "${root}/include"
        )
    target_compile_definitions("${target}" PRIVATE
        ${musl_cmake__compile-definitions}
        "GMUSL_use_glibc_compat"
        "GMUSL_no_posix_cancellation_points")
    target_compile_options("${target}" PRIVATE
        ${musl_cmake__compile-options}
        )
endfunction()
_def_lib_musl_partial_static()

function(common_compile_options target)
    target_compile_options("${target}" PRIVATE
        "$<$<COMPILE_LANGUAGE:CXX>:-std=c++11>"
        "$<$<COMPILE_LANGUAGE:C>:-std=c99>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-fPIE>"
        "$<$<COMPILE_LANGUAGE:CXX>:-fno-exceptions>"
        "$<$<COMPILE_LANGUAGE:CXX>:-fno-rtti>"
        "$<$<COMPILE_LANGUAGE:CXX>:-fno-threadsafe-statics>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-semantic-interposition>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-fstack-clash-protection>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-fvisibility=hidden>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-ffunction-sections>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-fdata-sections>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-plt>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-asynchronous-unwind-tables>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-fno-unwind-tables>")
    if(gmusl-demo-dump-assembly)
        target_compile_options("${target}" PRIVATE "$<$<COMPILE_LANGUAGE:CXX,C>:-save-temps=obj")
    endif()
endfunction()

function(common_link_options target)
    target_link_options("${target}" PRIVATE
        "$<$<BOOL:${clang-snua}>:--start-no-unused-arguments>"
        "-static-libgcc"
        "$<$<BOOL:${clang-snua}>:--end-no-unused-arguments>"

        "$<$<BOOL:${gnu-nostdlib-cpp}>:-nostdlib++>"

        "-Wl,--gc-sections"

        # Only add DT_NEEDED dependencies for libraries that are
        # actually used by the output binary.
        "-Wl,--as-needed"

        # Mark pages modified by the dynamic loader during relocation as
        # read-only after the loader has finished relocation.
        "-Wl,-z,relro"

        # Disable lazy symbol resolution.
        "-Wl,-z,now"

        # In a .so, if a .so-local definition for a global symbol exists,
        # use it instead of using a call through the PLT or GOT or
        # whatever. This mirrors the behavior of linkers and DLLs on
        # Windows. Note that it's possible for multiple different .sos to
        # include definitions of symbols that are assumed to be
        # whole-program-global, like RTTI information, which is used in
        # the implementation of exceptions. But this doesn't matter to
        # me, and shouldn't matter for any well-designed project: the very
        # idea of a "stable C++ ABI" is silly, and letting exceptions or
        # whatever implicitly-generated uncontrollable C++ crap leak across
        # .so/DLL boundaries is a bad idea.
        "-Wl,-Bsymbolic"
        "-Wl,-Bsymbolic-functions"
        "-Wl,--no-undefined"
        "-Wl,--dynamic-linker,${musl-program-interpreter}"

        "-Wl,--build-id=0x0101010101010101")
    set_target_properties("${target}" PROPERTIES LINKER_LANGUAGE "C")
endfunction()

function(external_debug_info target)
    if(NOT gmusl-demo-no-external-debuginfo)
        add_custom_command(TARGET "${target}" POST_BUILD
            COMMAND "${CMAKE_OBJCOPY}" --only-keep-debug "$<TARGET_FILE:${target}>" "$<TARGET_FILE:${target}>.dbg"
            COMMAND "${CMAKE_OBJCOPY}" --strip-all "$<TARGET_FILE:${target}>"
            COMMAND "${CMAKE_OBJCOPY}" --add-gnu-debuglink "$<TARGET_FILE:${target}>.dbg" "$<TARGET_FILE:${target}>")
        set_property(TARGET "${target}" APPEND PROPERTY ADDITIONAL_CLEAN_FILES "$<TARGET_FILE:${target}>.dbg")
    endif()
endfunction()

function(_def_test_full_static_link)
    set(target "test-full-static-link")
    add_executable("${target}")
    target_sources("${target}" PRIVATE "${root}/gmusl/src/test-full-static-link/test-full-static-link-main.cpp")
    target_link_libraries("${target}" PRIVATE "lib-musl-full-static" "-lgcc")
    target_include_directories("${target}" SYSTEM BEFORE PRIVATE
        "${root}/gmusl/src/generated-headers"
        "${root}/arch/${musl-arch}"
        "${root}/arch/generic"
        "${root}/include")
    target_compile_options("${target}" PRIVATE
        "$<$<COMPILE_LANGUAGE:CXX,C>:-nostdinc>"
        "$<$<COMPILE_LANGUAGE:CXX,C>:-ffreestanding>")
    common_compile_options("${target}")
    target_link_options("${target}" PRIVATE
        "$<$<BOOL:${clang-snua}>:--start-no-unused-arguments>"
        "-nostartfiles"
        "-nolibc"
        "$<$<BOOL:${clang-snua}>:--end-no-unused-arguments>"
        "-Wl,--entry=_start")
    common_link_options("${target}")
    external_debug_info("${target}")
endfunction()
_def_test_full_static_link()

function(_def_test_static_musl_dynamic_glibc)
    set(target "test-static-musl-dynamic-glibc")
    add_executable("${target}")
    target_sources("${target}" PRIVATE
        "${root}/gmusl/src/test-static-musl-dynamic-glibc/test-static-musl-dynamic-glibc-main.cpp"
        )
    target_link_libraries("${target}" PRIVATE "lib-musl-partial-static")
    target_include_directories("${target}" SYSTEM BEFORE PRIVATE
        "${root}/gmusl/src/glibc-compat/include"
        "${root}/gmusl/src/generated-headers"
        "${root}/arch/${musl-arch}"
        "${root}/arch/generic"
        "${root}/include")
    common_compile_options("${target}")
    target_link_options("${target}" PRIVATE
        "$<$<BOOL:${clang-snua}>:--start-no-unused-arguments>"
        "-nostartfiles"
        "-nolibc"
        "$<$<BOOL:${clang-snua}>:--end-no-unused-arguments>"
        "-Wl,--entry=__glibc_compat_start")
    common_link_options("${target}")
    target_link_libraries("${target}" PRIVATE "abi-libdl" "abi-libpthread" "abi-librt" "abi-ld" "abi-libc")
    external_debug_info("${target}")
    set_target_properties("${target}" PROPERTIES SKIP_BUILD_RPATH TRUE)
endfunction()
_def_test_static_musl_dynamic_glibc()
