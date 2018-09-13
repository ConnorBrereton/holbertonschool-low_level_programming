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
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
		putchar(alpha);
	for (alpha = 65; alpha <= 90; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
