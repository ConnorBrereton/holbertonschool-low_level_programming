#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverse string in memory
 *
 * @s: char pointer to string
 *
 * Return: none
 */

void rev_string(char *s)
{
	char old, new;
	int i = 0;
	int j;

	if (*s == '\0') /* case: empty */
		return;

	while (s[i] != '\0') /* temp set to end pos */
		i++;
	i = i - 1;

	for (j = 0; j <= i; j++) /* swap outside in */
	{
		new = s[j];
		old = s[i];
		s[j] = old;
		s[i] = new;
		i--;
	}
}
