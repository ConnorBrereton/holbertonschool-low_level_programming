#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	/* empty string is palindrome */
	if (*s == 0)
	{
		return (1);
	}

	/* iterate by "shrinking" */
	else if (validate())
	{
		return (1);
	}

	/* common case: failure */
	else
	{
		return (0);
	}
}


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int validate(int a, int z, char *s)
{
	/* check breakpoint */
	if (s[a] != s[z])
	{
		return (0);
	}

	/* case: meet in middle */
	else if (a == z)
	{
		return (1);
	}

	/* execute recursion */
	else
	{
		return (validate(a++, z--, s));
	}
}
