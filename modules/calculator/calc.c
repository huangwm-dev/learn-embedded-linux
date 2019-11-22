/*
 * Module to demostrate how to do some calculations.
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>

int GLOBAL_VARIABLE = 1000;
EXPORT_SYMBOL(GLOBAL_VARIABLE);

void calculator(int x, int y)
{
	printk(KERN_INFO "x is %d y is %d\n", x, y);
	printk(KERN_INFO "Sum is           %d\n", x + y);
	printk(KERN_INFO "Difference is    %d\n", x - y);
	printk(KERN_INFO "Product is       %d\n", x * y);
	printk(KERN_INFO "Divison is       %d\n", x / y);
	printk(KERN_INFO "Mod is           %d\n", x % y);
	printk(KERN_INFO "Bitwise NOT of %d Is   %d\n", x, ~x);
	printk(KERN_INFO "Bitwise OR is    %d\n", x | y);
	printk(KERN_INFO "Bitwise AND is   %d\n", x & y);
	printk(KERN_INFO "Bitwise XOR Is   %d\n", x ^ y);
	printk(KERN_INFO "Logical OR Is    %d\n", x || y);
	printk(KERN_INFO "Logical AND Is   %d\n", x && y);
}
EXPORT_SYMBOL(calculator);

static int __init calc_init(void)
{
	printk(KERN_INFO "Hello from calculator module\n");

	return 0;
}

static void __exit calc_exit(void)
{
	return;
}

module_init(calc_init);
module_exit(calc_exit);

MODULE_DESCRIPTION("Module to demostrate how to do some calculations.");
MODULE_AUTHOR("Aleksandr Anisimov <anisimov.alexander.s@gmail.com>");
MODULE_LICENSE("GPL");
