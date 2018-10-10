#include <stdlib.h>

/**
 * *str_concat - returns pointer to concatenation of s1 and s2
 * @s1: LHS string
 * @s2: RHS string
 * Return: (s3) success (NULL) failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	char *temp;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	s3 = malloc((sizeof(*s1) * len1) * (sizeof(*s2) * len2) + 1);

	temp = s3;

	while (*s1)
		*temp++ = *s1++;

	while (*s2)
		*temp++ = *s2++;

	*temp = '\0';

	return (s3);
}
