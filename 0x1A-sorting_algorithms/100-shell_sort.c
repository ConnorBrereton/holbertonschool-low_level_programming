#include "sort.h"

/**
 * shell_sort - Knuth Shell Sort
 *
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: n/a
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, step;
	int pivot;

	if (!array || size < 2)
		return;

	step = 1;
	while (step < size / 3) /* sets our gap */
		step = 3 * step + 1;

	while (step >= 1)
	{
		for (i = step; i < size; ++i)
		{
			for (j = i; j >= step &&
				     (array[j] < array[j - step]); j -= step)
			{
				pivot = array[j];
				array[j] = array[j - step];
				array[j - step] = pivot;
			}
		}
		print_array(array, size);
		step /= 3;
	}
}
