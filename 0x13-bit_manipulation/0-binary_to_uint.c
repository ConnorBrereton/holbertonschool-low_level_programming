#include "holberton.h"

/**
 * binary_to_uint - Shifts the entire string of bit one at a time
 *
 * @b: Pointer to the bits
 *
 * Return: Unsigned int representation of bits
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (!b)
		return (0);

	for (n = 0; *b; b++)
	{
		/* shift entire string and convert */
		if (*b == '1')
			n = (n << 1) | 1;

		/* non converting case */
		else if (*b == '0')
			n <<= 1;

		else
			return (0);
	}

	return (n);
}
