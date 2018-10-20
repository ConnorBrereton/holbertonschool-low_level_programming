#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints parameter-n ,' ' (0..n)-times
 * @separator: comma space value between parameters
 * @n: number of parameters
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	if (n == 0)
		return;

	/* sets pointer to first parameter */
	va_start(list, n);

	/* case: separator is not null */
	if (separator)
	{
		/* print num. sep. pattern */
		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s", va_arg(list, int), separator);
		}
		printf("%d\n", va_arg(list, int));
	}

	/* case: separator is null */
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
		}
		printf("\n");
	}
	va_end(list);
}
