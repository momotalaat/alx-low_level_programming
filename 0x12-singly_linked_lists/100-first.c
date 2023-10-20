#include <stdio.h>
#include <stdlib.h>

void pr_bef_main(void) __attribute__((constructor));

/**
 * pr_bef_main - Print some thing before the main function is excuted
 */

void pr_bef_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

