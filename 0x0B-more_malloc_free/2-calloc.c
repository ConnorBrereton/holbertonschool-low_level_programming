#include <stdlib.h>
#include "holberton.h"

/**
 * *_calloc - allocates memory for array
 * @nmemb: number of elements in the array
 * @size: byte size
 * Return: memory pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == 0)
		return (NULL);

	_memset(ptr, nmemb, size, '\0');

	return (ptr);
}


/**
 * *_memset - sets memory allocated in _calloc() to @nc
 * @temp1: pointer to memory that gets fed char @c
 * @nmemb: number of elements in the array
 * @size: byte size
 * @c: null character
 * Return: memory with set values
 */

void *_memset(char *temp1, unsigned int nmemb, unsigned int size, char c)
{
	char *temp2;
	unsigned int i;

	for (i = 0; i < nmemb * size; i++)
	{
		temp1[i] = c;
	}
	temp2 = temp1;

	return (temp2);
}
