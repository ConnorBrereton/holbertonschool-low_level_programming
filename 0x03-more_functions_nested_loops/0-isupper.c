#include "holberton.h"

/**
 * _isupper - check if @c is uppercase using ascii lookup
 *
 * @c: character variable to check
 *
 * Return: 1 if upper, 0 else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
