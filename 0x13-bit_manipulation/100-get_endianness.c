#include "holberton.h"

/**
 * get_endianness - Checks byte order on machine
 *
 * Return: 0 (little endian) 1 (big endian)
 */

int get_endianness(void)
{
	/* n = 0001 (LI) n = 1000 (BI) */
	unsigned int n = 1;

	/* get the first char */
	char *s = (char *) &n;

	/* return value 0 or 1 */
	return (int) *s;
}
