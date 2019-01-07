#include <stdlib.h>

/**
 * *create_array - create and init array of chars
 * @size: size of memory
 * @c: the char init'd
 *
 * Return: arr (success) NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size <= 0) /* prevents malloc errors */
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size); /* allocates room for each char */

	if (arr == 0) /* if empty array */
	{
		return (NULL);
	}

	for (i = 0; i < size; i++) /* set each index to char */
	{
		arr[i] = c;
	}
	return (arr);
}
