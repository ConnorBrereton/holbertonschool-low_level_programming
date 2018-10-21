#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _print_char - prints char(s)
 * @stream: points to parameter input stream
 * Return: none
 */

void _print_char(va_list stream)
{
	char c;

	c = va_arg(stream, int);
	printf("%c", c);
}


/** _print_int - prints int(s)
 * @stream: points to parameter input stream
 * Return: none
 */

void _print_int(va_list stream)
{
        int i;

	i = va_arg(stream, int);
	printf("%d", i);
}


/** _print_float - prints float(s)
 * @stream: points to parameter input stream
 * Return: none
 */

void _print_float(va_list stream)
{
        float f;

        f = va_arg(stream, double);
        printf("%f", f);
}


/** _print_string - prints string(s)
 * @stream: points to parameter input stream
 * Return: none
 */

void _print_string(va_list stream)
{
        char *s;

	s = va_arg(stream, char *);

	if (s == NULL || *s == '\0')
		printf("(nil)");

	printf("%s", s);
}


/** _print_all - watered down print() that handles types declared above
 * @format: points to parameter input stream
 * Return: none
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	const char *input_stream;

	type_t controller[] = {
	{'c', _print_char},
	{'i', _print_int},
	{'f', _print_float},
	{'s', _print_string},
	{0, NULL}
	};

	va_list stream;
	input_stream = format;
	va_start(stream, format);

	while (input_stream != NULL  && *input_stream != '\0')
	{
		while (controller != NULL)
		{
			if (controller[i].cmd == *input_stream)
			{
				printf("%s", separator);
				controller[i].f(stream);
				separator = ", ";
				break;
			}
			i++;
		}
		input_stream++;
	}
	va_end(stream);
	putchar('\n');
}
