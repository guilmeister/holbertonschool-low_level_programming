#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - code executed before main is run
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n
I bore my house upon my back!\n");
}
