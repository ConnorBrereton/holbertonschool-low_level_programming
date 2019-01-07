#include "holberton.h"

/**
 * print_line - puts 'n' lines
 *
 * @n: passed as argument
 *
 * Return: none
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
