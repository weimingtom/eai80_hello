
/* auto-generated by gen_syscalls.py, don't edit */

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#ifdef __cplusplus
extern "C" {
#endif

K_SYSCALL_DECLARE2(K_SYSCALL_LVD_ENABLE_INTERRUPT, lvd_enable_interrupt, int, struct device *, dev, LVD_VoltageDetection, voltage);

K_SYSCALL_DECLARE2(K_SYSCALL_LVD_DISABLE_INTERRUPT, lvd_disable_interrupt, int, struct device *, dev, LVD_VoltageDetection, voltage);

K_SYSCALL_DECLARE2(K_SYSCALL_LVD_CLEAR_INTERRUPT_FLAG, lvd_clear_interrupt_flag, int, struct device *, dev, LVD_VoltageDetection, voltage);

K_SYSCALL_DECLARE2(K_SYSCALL_LVD_LOCK, lvd_lock, int, struct device *, dev, LVD_VoltageDetection, voltage);

K_SYSCALL_DECLARE3(K_SYSCALL_LVD_RESET_LEVEL, lvd_reset_level, int, struct device *, dev, LVD_VoltageDetection, voltage, uint32_t, level);

K_SYSCALL_DECLARE1(K_SYSCALL_LVD_CHECK_RESET_STATUS, lvd_check_reset_status, int, struct device *, dev);

K_SYSCALL_DECLARE1(K_SYSCALL_LVD_CLEAR_RESET_STATUS, lvd_clear_reset_status, int, struct device *, dev);

K_SYSCALL_DECLARE2(K_SYSCALL_LVD_SET_CONFIG, lvd_set_config, int, struct device *, dev, lvd_cfg, cfg);

K_SYSCALL_DECLARE2(K_SYSCALL_LVD_ENABLE, lvd_enable, int, struct device *, dev, lvd_cfg *, data);

K_SYSCALL_DECLARE2(K_SYSCALL_LVD_GET_VDX_FLAG, lvd_get_VDX_flag, int, struct device *, dev, int, source);

#ifdef __cplusplus
}
#endif

#endif
