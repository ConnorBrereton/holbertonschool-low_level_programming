#include <stdio.h>

/**
 * *_strchr - strchr() w/o stdlib
 * @s: pointer to string
 * @c: character to match
 * Return: string from @c to \0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c) /* found char */
		{
			return ((char *) &s[i]);
		}
	}
	return (NULL);
}
