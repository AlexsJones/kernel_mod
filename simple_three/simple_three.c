/*
 * =====================================================================================
 *
 *       Filename:  simple_three.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  30/10/14 09:14:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static short int myshort = 1;
module_param(myshort, short, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(myshort, "A short int");

static int __init simple_three_init(void) {
  printk(KERN_INFO "simple_three device has been registered");
  printk(KERN_INFO "Hello my short is %hd",myshort);
  return 0;
}
static void __exit simple_three_exit(void) {
  printk(KERN_INFO "simple_three device has been unregistered");
}
module_init(simple_three_init);
module_exit(simple_three_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alex Jones <jonesax@hush.com>");
MODULE_DESCRIPTION("Example");
