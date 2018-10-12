#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - allocates memory for size of len
 * @min: lower bound
 * @max: upper bound
 * Return: pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int temp, len = 0;
	int *ptr1;

	if (min > max)
		return (NULL);

	temp = min;

	while (temp <= max)
	{
		len++;
		temp++;
	}

	ptr1 = malloc(sizeof(int) * len);
	if (ptr1 == NULL)
		return (NULL);

	ptr1 = array_init(ptr1, min, max);

	return (ptr1);
}


/**
 * *array_init - intialized the memory with values
 * @ptr2: ptr from ptr1 to the numbers allocated in memory
 * @min: lower bound
 * @max: upper bound
 * Return: the number is memory
 */

int *array_init(int *ptr2, int min, int max)
{
	int i = 0;

	while (i <= max)
	{
		ptr2[i] = min;
		i++;
		min++;
	}

	return (ptr2);
}
