/**
 * *_strncpy - copy n-bytes src->dest
 *
 * @src: original string
 *
 * @dest: new string
 *
 * @n: byte size
 *
 * Return: @dest (sucess), 0 (failure)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int end = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (src[0] == '\0')
			return (0);

		dest[i] = src[i];
	}
	end = i;

	while (end < n)
	{
		dest[end++] = '\0';
	}

	return (dest);
}
