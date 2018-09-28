/**
 * *_strncpy - copy n-bytes src->dest
 *
 * @src: original string
 *
 * @dest: new string
 *
 * @n: byte size
 *
 * Return: new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int end = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	end = i;

	while (end < n)
	{
		dest[end++] = '\0';
	}

	return (dest);
}
