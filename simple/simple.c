/*
 * =====================================================================================
 *
 *       Filename:  simple.c
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


static int __init simple_init(void) {
  printk(KERN_INFO "simple device has been registeredn");
  return 0;
}
static void __exit simple_exit(void) {
  printk(KERN_INFO "simple device has been unregisteredn");
}
module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alex Jones <jonesax@hush.com>");
MODULE_DESCRIPTION("Example");
