#include "holberton.h"

/**
 * _islower - Checks if @c is alphabetical char
 *
 * @c: Variable for given char
 *
 * Description: Check if @c is low-alpha using _islower
 *
 * Return: 1 if lower. 0 else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
