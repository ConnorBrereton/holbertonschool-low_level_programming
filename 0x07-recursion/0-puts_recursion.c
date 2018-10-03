#include "holberton.h"

/**
 * _puts_recursion - recursively prints string
 * @s: pointer to string
 * Return: none
 */

void _puts_recursion(char *s)
{
	while (!*s) /* base case: end of string */
	{
		_putchar('\n');
		return;
	}

	/* recursive case */
	_putchar(*s);
	_puts_recursion(s + 1);
}
