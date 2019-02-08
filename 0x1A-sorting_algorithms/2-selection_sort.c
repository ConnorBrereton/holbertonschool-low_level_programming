#include "sort.h"

/**
 * selection_sort - Selection sort implementation
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: none (void function)
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, local_min, pivot;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		local_min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[local_min])
				local_min = j;
		}

		pivot = array[i];
		array[i] = array[local_min];
		array[local_min] = pivot;

		if (i != local_min) /* don't print on first pass */
			print_array(array, size);
	}
}
