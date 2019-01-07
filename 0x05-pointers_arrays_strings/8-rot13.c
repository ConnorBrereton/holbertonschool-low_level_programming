/**
 * *rot13 - implements ROT-13 encryption on a string
 *
 * @s: string to encrypt
 *
 * Return: encrypted string @s
 */

char *rot13(char *s)
{
	int i, j;

	char *top = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *bot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; top[j] != '\0'; j++)
		{
			if (s[i] == top[j])
			{
				s[i] = bot[j];
				break;
			}
		}
	}
	return (s);
}
