#include <linux/hashtable.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Lambert");
MODULE_DESCRIPTION("A sample driver.");


static int __init hello_3_init(void){
    pr_info("Hello wrold 5\n");
    return 0;
}

static void __exit hello_3_exit(void) {
    pr_info("Goodbye, world 5\n");
}

module_init(hello_3_init);
module_exit(hello_3_exit);