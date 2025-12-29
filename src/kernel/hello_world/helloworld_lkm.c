# include <linux/init.h>
# include <linux/kernel.h>
# include <linux/module.h>

MODULE_AUTHOR("TheFinalJoke");
MODULE_DESCRIPTION("Doing my first kernel Module");

MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1.0");

static int __init helloworld_lkm_init(void) {
    printk(KERN_INFO "Hello World");
    return 0;

}

static void __exit helloworld_lkm(void) {
    printk(KERN_INFO "GOODBYE WORLD");
    return 0;
}

module_init(helloworld_lkm_init);
module_exit(helloworld_lkm);