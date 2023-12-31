
/* auto-generated by gen_syscalls.py, don't edit */

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#ifdef __cplusplus
extern "C" {
#endif

K_SYSCALL_DECLARE1_VOID(K_SYSCALL_WDT_ENABLE, wdt_enable, struct device *, dev);

K_SYSCALL_DECLARE1_VOID(K_SYSCALL_WDT_DISABLE, wdt_disable, struct device *, dev);

K_SYSCALL_DECLARE2_VOID(K_SYSCALL_WDT_GET_CONFIG, wdt_get_config, struct device *, dev, struct wdt_config *, config);

K_SYSCALL_DECLARE2(K_SYSCALL_WDT_SET_CONFIG, wdt_set_config, int, struct device *, dev, struct wdt_config *, config);

K_SYSCALL_DECLARE1_VOID(K_SYSCALL_WDT_RELOAD, wdt_reload, struct device *, dev);

#ifdef __cplusplus
}
#endif

#endif
