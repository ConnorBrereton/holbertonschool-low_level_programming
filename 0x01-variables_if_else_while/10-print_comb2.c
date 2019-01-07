#include <stdio.h>

/**
 * main - entry point for program
 *
 * Description: print numbers 00-99 using putchar and continue
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 57)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
