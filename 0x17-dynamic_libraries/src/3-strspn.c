/**
 * _strspn - implements strspn() from scratch
 * @s: pointer to original string
 * @accept: string to check against
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (count != i) /* halts iteration until match found */
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
