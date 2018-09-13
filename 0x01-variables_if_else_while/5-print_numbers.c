#include <stdio.h>

/**
 * main - entry point for program
 *
 * Description: print lower and uppercase chars
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	putchar('\n');
	return (0);
}
