#include "holberton.h"

/**
 * counter - Counts number of 1 bits
 *
 * @x: Stores n^m result
 *
 * Return: Count of 1 bits
 */

unsigned int counter(unsigned long int x)
{
	unsigned int count = 0;

	while (x)
	{
		count += x & 1UL;
		n >>= 1;
	}

	return (count);
}

/**
 * flip_bits - Calls counter function on two unsigned
 * long ints passed as argument
 *
 * @n: First unsigned long int
 *
 * @m: Second unsigned long int
 *
 * Return: Result of counter function
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (counter(n ^ m));
}
