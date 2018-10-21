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

	/* sets pointer to first parameter */
	va_start(list, n);

	/* print num. sep. pattern */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (separator == NULL || *separator == '\0')
			continue;

		if (i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
