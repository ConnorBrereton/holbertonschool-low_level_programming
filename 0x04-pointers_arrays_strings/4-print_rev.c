#include "holberton.h"

/**
 * print_rev - print in reverse dont change memory
 *
 * @s: char pointer to string
 *
 * Return: none
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
