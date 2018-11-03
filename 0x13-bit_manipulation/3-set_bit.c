#include "holberton.h"

/**
 * set_bit - Sets bit at a given index to 1
 *
 * @n: Pointer to stream of bits
 *
 * @index: Bit we want to change
 *
 * Return: 1 (success) -1 (fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if outside 32 bit range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* creates 32 bit mask 31 0 and one 1 */
	*n |= 1UL << index;

	return (1);
}
