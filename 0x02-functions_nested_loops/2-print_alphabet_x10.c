#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * desc - print low-alpha 10x
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, count = 10;

	while (count > 0)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
		count--;
	}
}
