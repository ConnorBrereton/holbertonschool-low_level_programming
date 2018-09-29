/**
 * has_character - alerts marker if character exists
 *
 * @marker: holds value of matching character
 *
 * Return: success (1) | failure (0)
 */

int has_character(char marker)
{
	int j;
	char c[] = {' ', '\t', '\n', ',',
	';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (j = 0; j < 13; j++)
	{
		if (marker == c[j])
			return (1);
	}
	return (0);
}


/**
 * *cap_string - converts low->upper using ASCII mapping
 *
 * @s: pointer to string
 *
 * Return: edited string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (has_character(s[i])) /* check for match in characters[] */
		{
			/* goes to value to right of character's index */
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		if (s[i] == '\t')
			s[i] = ' ';
	}
	return (s);
}
