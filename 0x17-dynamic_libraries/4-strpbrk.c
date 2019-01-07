#define NULL 0

/**
 * *_strpbrk - implements strpbrk from scratch
 * @s: string to check
 * @accept: string to compare against
 * Return: string from match -> \0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return ((char *) &s[i]); /* casting for return */
			}
		}
	}
	return (NULL);
}
