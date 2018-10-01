/**
 * *_memset - fills memory with constant byte
 * @s: ptr to memory area
 * @b: constant byte
 * @n: no bytes to fill
 * Return: ptr to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *temp = s;

	for (i = 0; i < n; i++)
	{
		*temp = b;
		temp++;
	}
	return (temp);
}
