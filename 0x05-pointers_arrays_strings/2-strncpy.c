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

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
