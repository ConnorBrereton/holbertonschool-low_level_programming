#include <stdio.h>

/**
 * main - entry point for program
 *
 * Description: print all hexadecimal numbers in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
