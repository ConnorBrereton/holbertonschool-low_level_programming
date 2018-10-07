/**
 * _strcmp - checks strings against 3 cases
 *
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: DELTA (s1>s2) 0 (s1=s2) DELTA (s2>s1)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
