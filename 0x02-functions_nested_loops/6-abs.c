#include "holberton.h"

/**
 * _abs - prints absolute value of @n
 *
 * @n: Variable that holds given number.
 *
 * Description: Use "if cases" to determine abs val of @n.
 *
 * Return: absolute value of @n
 */

int _abs(int n)
{
	if (n > 0 || n == 0)
		return (n);
	else
		return (-1 * n);
}
