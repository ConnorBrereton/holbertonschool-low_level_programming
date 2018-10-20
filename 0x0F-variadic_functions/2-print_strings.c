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

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *pmtr;

	/* set pointer to start of stream*/
	va_start(list, n);

	while (i < n)
	{
		/* pmtr gets set to pointer + sizeof(type) */
		pmtr = va_arg(list, char *);

		/* check for parameter stream */
		if (pmtr)
			printf("%s", pmtr);

		else
			printf("(nil)");

		/* ensure no separator at end of stream */
		if ((separator != '\0') && (i < n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
