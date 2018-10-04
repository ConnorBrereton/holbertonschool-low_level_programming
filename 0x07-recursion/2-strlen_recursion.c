#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: pointer to string
 * Return: size
 */

int _strlen_recursion(char *s)
{
	/* base case: \0 character */
	if (*s == '\0')
	{
		return (0);
	}

	/* recursive case: add each iteration */
	else
	{
		return (1 + _strlen_recursion(s + 1));
		_putchar('\n');
	}
}
