#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("Hello World - Linux Kernel Module");

static int __init hello_init(void)
{
  printk(KERN_INFO "Hello World!\n");
  return 0;
}

static void __exit hello_exit(void)
{
  print(KERN_INFO "Goodbye World!\n");
}

module_init(hello_init);
module_exit(hello_exit);
