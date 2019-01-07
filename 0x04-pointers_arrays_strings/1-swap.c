#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - swaps values of integers
 *
 * @a: value 1
 * @b: value 2
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
