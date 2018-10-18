#include "function_pointers.h"

/**
 * array_iterator - calls pointer to function for each index
 * @array: pointer to array to iteratively call function
 * @size: size of @array
 * @action: pointer to function to execute
 * Return: none
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
