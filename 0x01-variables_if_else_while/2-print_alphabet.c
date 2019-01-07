#include <stdio.h>

/**
 * main - Entry point
 *
 * description - print the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
