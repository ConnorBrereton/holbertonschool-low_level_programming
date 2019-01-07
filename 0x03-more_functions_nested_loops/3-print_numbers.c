#include "holberton.h"

/**
 * print_numbers - writes num to stdout
 *
 * Return: none
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
