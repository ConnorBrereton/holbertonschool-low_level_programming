#include "holberton.h"

/**
 * get_bit - Returns bit at a given index
 *
 *
 * @n: Number represented in binary
 * @index: Index to evaluate
 *
 * Return: Bit value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	/* check that index called > allowed */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* create bit mask */
	m = 1 << index;

	/* eliminates the bits not at index */
	return ((n & m) > 0);
}
