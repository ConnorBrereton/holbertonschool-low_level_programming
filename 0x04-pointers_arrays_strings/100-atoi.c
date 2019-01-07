#include "holberton.h"

/**
 * _atoi - converts string to int w/ edge cases
 *
 * @s: pointer to string
 *
 * Return: the string
 */

int _atoi(char *s)
{
	int i;
	int neg_marker = 1;
	unsigned int digits  = 0;

	for (i = 0; s[i] <= '0' && s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			neg_marker = neg_marker * -1;
		}

		if (s[0] == '\0')
			return (0);
	}

	/* iterate up to B to prevent extra digits */
	for (; s[i] != '\0' && s[i] != 'B'; i++)
	{
		/* create digit parameters */
		if (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
		{
			digits = digits * 10 + (s[i] - '0');
		}
	}
	return (digits * neg_marker);
}
