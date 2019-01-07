#include "holberton.h"

/**
 * _isalpha - Checks if @c is an alphabetical char
 *
 * @c: Variable for given char
 *
 * Description: Check if @c is a valid character using _isalpha
 *
 * Return: 1 if lower. 0 else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
