/**
 * *_strcat - implements strcat
 *
 * @src: first string
 *
 * @dest: second string
 *
 * Return: dest + src
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int dest_end = 0;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	dest_end = i;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[dest_end + j] = src[j];
	}
	dest[dest_end + j] = '\0';
	return (dest);
}
