#define NULL 0

/**
 * *_strchr - strchr() w/o stdlib
 * @s: pointer to string
 * @c: character to match
 * Return: string from @c to \0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((char) c == s[i]) /* found char */
		{
			return ((char *) &s[i]); /* returns contents @ position */
		}
		if (s[i] == c) /* edge case */
		{
			return ('\0');
		}
	}
	return (NULL);
}
