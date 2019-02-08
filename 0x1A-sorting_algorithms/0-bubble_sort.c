#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t l, r;
	int storage;

	if (size < 2 || !array)
		return;
	for (l = 0; l < (size - 1); l++)
	{
		for (r = 0; r < (size - l - 1); r++)
		{
			if (array[r] > array[r + 1])
			{
				storage = array[r];
				array[r] = array[r + 1];
				array[r + 1] = storage;
				print_array(array, size);
			}
		}
	}
}
