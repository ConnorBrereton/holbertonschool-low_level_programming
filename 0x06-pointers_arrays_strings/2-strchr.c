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
	char *temp;

	for (i = 0; s[i]; i++) /* normal case */
	{
		if (s[i] == c) /* found char */
		{
			temp = &s[i];
			break;
		}
	}

	/* searching for null char */
	if (s[i] == '\0' && c == '\0')
		temp = &s[i];

	return (temp);
}
