#include "holberton.h"

/**
 * is_palindrome - recursively checks if string is palindrome
 * @s: pointer to string to check
 * Return: 1 (valid) 0 (invalid)
 */

int is_palindrome(char *s)
{
	int null_char;
	char *end;

	/* base case */
	if (*s == '\0')
	{
		return (1);
	}

	/* recursive case */
	else
	{
		/* goto null char to prevent empty case */
		null_char = go_to_end(s);

		/* sets pointer to the last character */
		end  = (s + (null_char - 1));

		/* execute recursion */
		return (validate(s, end));
	}
}


/**
 * go_to_end - sets postion of end of string for other functions
 * @end: pointer to NULL char
 * Return: last index (SUCCESS) 0 (FAIL)
 */

int go_to_end(char *end)
{
	/* case: empty */
	if (*end == '\0')
	{
		return (0);
	}

	/* iterate to NULL character */
	else
	{
		return (1 + go_to_end(end + 1));
	}
}


/**
 * validate - executes iterations
 * @beginning: pointer to front of string
 * @end: pointer to end of string
 * Return: Always 0.
 */

int validate(char *beginning, char *end)
{
	/* check values dont match */
	if (*beginning != *end)
	{
		return (0);
	}

	/* check that pointers cross */
	if (beginning > end)
	{
		return (1);
	}

	/* execute recursion */
	else
	{
		return (validate(++beginning, --end));
	}
}
