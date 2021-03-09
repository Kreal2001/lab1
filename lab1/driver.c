#include <linux/module.h>
#include <linux/init.h>

static int __init callInit(void)
{
	pr_info("Hello World\n");
	return 0;
}

static void __exit callExit(void)
{
	return 0;
}

module_init(callInit);
module_exit(callExit);

MODULE_AUTHOR("KIRILL ANTONOV");
MODULE_LICENSE("GPL V2");
MODULE_DESCRIPTION("KTSO-01-19");