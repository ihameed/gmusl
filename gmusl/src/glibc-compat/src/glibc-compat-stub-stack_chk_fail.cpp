extern "C" {

void
__stack_chk_fail(void) {
    __builtin_trap();
}

void
__stack_chk_fail_local(void) {
    __builtin_trap();
}

}
