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
	}
	return ('\0');
}
