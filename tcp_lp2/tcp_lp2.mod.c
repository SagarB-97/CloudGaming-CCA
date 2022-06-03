#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xb3753869, "module_layout" },
	{ 0x2a49e2f2, "tcp_reno_undo_cwnd" },
	{ 0x592c8931, "tcp_reno_ssthresh" },
	{ 0x4017fbd1, "tcp_unregister_congestion_control" },
	{ 0x88ab11f8, "tcp_register_congestion_control" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2a06b45f, "tcp_reno_cong_avoid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B4549C3F54214F2A263F80E");
