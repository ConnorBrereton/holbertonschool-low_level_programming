#include "holberton.h"

/**
 * _isdigit - check if @c is (0..9) using ascii lookup
 *
 * @c: character variable to check
 *
 * Return: 1 if digit, 0 else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
