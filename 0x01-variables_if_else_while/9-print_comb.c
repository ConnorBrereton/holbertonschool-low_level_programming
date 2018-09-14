#include <stdio.h>

/**
 * main - entry point for program
 *
 * Description: print all possible combinations of single-digit numbers separated by comma in asc order using putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
