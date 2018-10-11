#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: fully copied string
 * @s2: partially/fully copies string
 * @n: no of bytes to copy from @s2
 * Return: pointer s3
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k = 0;
	unsigned int count1 = 0, count2 = 0;
	char *s3, *temp;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		count1++;

	for (j = 0; *(s2 + j) != '\0' && j <= n; j++)
		count2++;

	if (n > count2)
		n = count2;

	s3 = malloc(sizeof(char) * (count1 + n) + 1);

	if (s3 == NULL)
		return (NULL);

	temp = s3;

	while (*s1)
		*s3++ = *s1++;

	while (k < n)
	{
		*s3++ = *s2++;
		k++;
	}

	*s3 = '\0';
	return (temp);
}
