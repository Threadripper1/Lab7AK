// SPDX-License-Identifier: GPL-3.0-only

#include <linux/moduleparam.h>
#include "hello1.h"

extern int print_hello(uint);

static uint howmany = 1;

module_param(howmany, uint, 0660);
MODULE_PARM_DESC(howmany,  "Parameter-counter of pring out the message");

static int __init hello2_init(void)
{
	return print_hello(howmany);
}

static void __exit hello2_exit(void){}

module_init(hello2_init);
module_exit(hello2_exit);

MODULE_AUTHOR("Kolomiets Dmitro");
MODULE_DESCRIPTION("Hello2 advanced, world in Linux Kernel Training");
MODULE_LICENSE("Dual BSD/GPL");
