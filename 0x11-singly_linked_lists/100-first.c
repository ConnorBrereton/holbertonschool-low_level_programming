#include <stdio.h>

/* Function proto */
void foo(void) __attribute__ ((constructor));

/**
 * foo - constructor that runs before main
 *
 * @void: void
 *
 * Return: none
 */

void foo(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
