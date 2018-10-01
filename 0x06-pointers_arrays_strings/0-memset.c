/**
 * *_memset - fills memory with constant byte
 * @s: ptr to memory area
 * @b: constant byte
 * @n: no bytes to fill
 * Return: ptr to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
