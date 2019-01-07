#include "holberton.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: passed as argument
 *
 * Return: none
 */

void print_diagonal(int n)
{
	int slash, space;

	if (n <= 0)
		_putchar('\n');

	for (slash = 0; slash < n; slash++)
	{
		for (space = 0; space < slash; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
