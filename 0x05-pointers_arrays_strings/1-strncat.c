/**
 * *_strncat - implement strncat
 *
 * @src: original string
 *
 * @dest: LHS new string
 *
 * @n: byte size
 *
 * Return: new @dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int dest_end = 0;

	for (i = 0; dest[i] != '\0'; )
	{
		i++;
	}
	dest_end = i;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[dest_end + j] = src[j];
	}

	return (dest);
}
