#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns sum of parameters (variadic style)
 * @n: number of parameters
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	if (n == 0)
		return (0);

	/* sets pointer to first function param */
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		/* tells pointer how far to jump on each iteration */
		sum += va_arg(list, int);
	}

	/* free memory reserved for list */
	va_end(list);

	return (sum);
}
