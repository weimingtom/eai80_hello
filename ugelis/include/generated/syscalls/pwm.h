
/* auto-generated by gen_syscalls.py, don't edit */

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#ifdef __cplusplus
extern "C" {
#endif

K_SYSCALL_DECLARE4(K_SYSCALL_PWM_PIN_SET_CYCLES, pwm_pin_set_cycles, int, struct device *, dev, u32_t, pwm, u32_t, period, u32_t, pulse);

K_SYSCALL_DECLARE3(K_SYSCALL_PWM_GET_CYCLES_PER_SEC, pwm_get_cycles_per_sec, int, struct device *, dev, u32_t, pwm, u64_t *, cycles);

#ifdef __cplusplus
}
#endif

#endif