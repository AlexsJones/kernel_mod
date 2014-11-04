/*
 * =====================================================================================
 *
 *       Filename:  simple_four.c
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
#include <linux/keyboard.h>

int notify_intercept(struct notifier_block *nblock,  unsigned long code, void *_param) {
  struct keyboard_notifier_param *param = _param;
  struct vc_data *vc = param->vc;
}
static struct notifier_block nb = {
  .notifier_call = notify_intercept
};

static int __init simple_four_init(void) {
  
  register_keyboard_notifier(&nb);
  
  return 0;
}
static void __exit simple_four_exit(void) {
  unregister_keyboard_notifier(&nb);
}
module_init(simple_four_init);
module_exit(simple_four_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alex Jones <jonesax@hush.com>");
MODULE_DESCRIPTION("Example");
