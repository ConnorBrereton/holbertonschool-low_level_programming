#include "holberton.h"

/**
 * _print_rev_recursion - prints string reverse using recursion
 * @s: pointer to string
 * Return: none
 */

void _print_rev_recursion(char *s)
{

	/* base case: \0 is "first" in stack */
	if (*s == '\0')
	{
		return;
	}

	/* recursive case: iterate down stack */
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
