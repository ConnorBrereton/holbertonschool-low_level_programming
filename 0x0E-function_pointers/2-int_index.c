#include "function_pointers.h"

/**
 * int_index - searches for an integer value
 * @array: pointer to search array
 * @size: size of the array to search
 * @cmp: pointer to comparision function
 * Return: -1 (failure) index (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
