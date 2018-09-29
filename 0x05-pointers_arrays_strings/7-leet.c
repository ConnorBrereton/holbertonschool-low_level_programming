#include "holberton.h"

/**
 * *leet - replaces valid characters with numbers
 *
 * @s: pointer to string
 *
 * Return: string @s
 */

char *leet(char *s)
{
	int i, j;
	char *alphabet = "aeotlAEOTL";
	char *number = "4307143071";

	for (i = 0; s[i] != '\0'; i++) /* loop string */
	{
		for (j = 0; alphabet[j] != '\0'; j++) /* loop letter */
		{
			if (s[i] == alphabet[j]) /* find valid chars */
			{
				s[i] = number[j]; /* replace with mapped value */
			}
		}
	}
	return (s);
}
