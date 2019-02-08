#include "sort.h"

/**
 * quick_sort - calculates initial values for sort_quickly
 *
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	ssize_t lo = 0;

	if (!array || size < 2)
		return;

	sort_quickly(array, lo, (size - 1), size);
}

/**
 * sort_quickly - function wrapped by quick_sort
 *
 * @array: array passed from quick_sort
 * @lo: low index
 * @hi: high index
 * @size: size of array
 */
void sort_quickly(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t p_index;

	if (lo < hi)
	{
		p_index = partition(array, lo, hi, size);
		sort_quickly(array, lo, (p_index - 1), size);
		sort_quickly(array, (p_index + 1), hi, size);
	}
}

/**
 * partition - Sets the pivot and alligns elements to the
 * left of the pivot point in ascending order
 *
 * @array: array passed from quick_sort
 * @lo: first index, moves to right
 * @hi: end of array, where partition is set initially
 * @size: size of array
 *
 * Return: Next pivot position
 */
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	int swap;
	ssize_t j, i = lo - 1;

	for (j = lo; j <= (hi - 1); j++)
	{
		if (array[j] < array[hi])
		{
			i++;
			if (i != j)
			{
				swap = array[i];
				array[i] = array[j];
				array[j] = swap;
				print_array(array, size);
			}
		}
	}

	/*
	 * handles case when no values are < pivot
	 * and the hi-value is < our pivot
	 */

	if (array[hi] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = swap;
		print_array(array, size);
	}

	return (i + 1);
}
