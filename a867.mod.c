#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa718d155, "module_layout" },
	{ 0x3d5c9b08, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f114141, "complete_and_exit" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x19d8cbc3, "dvb_usb_device_exit" },
	{ 0x27574f94, "dvb_usb_device_init" },
	{ 0x3deca2fb, "filp_close" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdfa3a96f, "usb_autopm_get_interface" },
	{ 0x9478a2b5, "mutex_unlock" },
	{ 0xe174aa7, "__init_waitqueue_head" },
	{ 0x83636ee3, "wait_for_completion" },
	{ 0xf5cf326a, "param_ops_short" },
	{ 0x74fad798, "current_task" },
	{ 0x193c3bd6, "usb_deregister" },
	{ 0x89bd5568, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0xe670e8dd, "mutex_lock" },
	{ 0x1a925a66, "down" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x8d5e59df, "usb_get_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfd522ba6, "usb_bulk_msg" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x14612089, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xf59f197, "param_array_ops" },
	{ 0x57b09822, "up" },
	{ 0x425cce39, "usb_register_driver" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x16a4c2ce, "usb_autopm_put_interface" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x47629616, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb";

MODULE_ALIAS("usb:v07CApA333d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CApB867d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CAp1867d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CAp0337d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CApA867d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CAp0867d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CApF337d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CAp3867d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "A5B6C5842ADD870DF60E7A8");
