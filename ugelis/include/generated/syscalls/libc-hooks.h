
/* auto-generated by gen_syscalls.py, don't edit */

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#ifdef __cplusplus
extern "C" {
#endif

K_SYSCALL_DECLARE2(K_SYSCALL__UGELIS_READ, _ugelis_read, int, char *, buf, int, nbytes);

K_SYSCALL_DECLARE2(K_SYSCALL__UGELIS_WRITE, _ugelis_write, int, char *, buf, int, nbytes);

K_SYSCALL_DECLARE2(K_SYSCALL__UGELIS_FPUTC, _ugelis_fputc, int, int, c, FILE *, stream);

K_SYSCALL_DECLARE4(K_SYSCALL__UGELIS_FWRITE, _ugelis_fwrite, size_t, const void *_MLIBC_RESTRICT, ptr, size_t, size, size_t, nitems, FILE *_MLIBC_RESTRICT, stream);

#ifdef __cplusplus
}
#endif

#endif
