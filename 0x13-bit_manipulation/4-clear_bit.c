#include "holberton.h"

/**
 * clear_bit - Sets bit at given index to 0
 *
 * @n: Pointer to stream of bits
 *
 * @index: Bit we want to change
 *
 * Return: 1 (success) -1 (fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if outside 32 bit range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* creates 32 bit mask 31 1s and one 0 */
	/* shifts the mask left @index spots */
	/* inverts the mask and does AND compare */
	*n &= ~(1UL << index);

	return (1);
}
