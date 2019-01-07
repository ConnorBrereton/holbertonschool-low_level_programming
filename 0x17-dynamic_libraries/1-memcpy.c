/**
 * *_memcpy - copies n-bytes from src to dest
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to transfer
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
