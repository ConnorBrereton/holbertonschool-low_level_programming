#include <stdio.h>
#include "variadic_functions.h"

void _print_char(va_list params);
void _print_int(va_list params);
void _print_float(va_list params);
void _print_string(va_list params);

/**
  * _print_char - prints characters
  * @params: va_list declaration
  * Return: none
  */

void _print_char(va_list params)
{
	printf("%c", va_arg(params, int));
}

/**
  * _print_int - prints ints
  * @params: va_list declaration
  * Return: none
  */

void _print_int(va_list params)
{
	printf("%d", va_arg(params, int));
}

/**
  * _print_float - prints floats
  * @params: va_list declaration
  * Return: none
  */

void _print_float(va_list params)
{
	printf("%f", va_arg(params, double));
}

/**
  * _print_string - prints strings
  * @params: va_list declaration
  * Return: none
  */

void _print_string(va_list params)
{
	char *str;

	str = va_arg(params, char *);

	if (!str)
		printf("(nil)");

	printf("%s", str);
}

/**
  * print_all - prints parameters
  * @format: string that has argument
  * Return: none
  */

void print_all(const char * const format, ...)
{
	va_list params;
	char *separator;
	int i, j;

	type_s controller[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_float},
		{"s", _print_string},
		{NULL, NULL}
	};

	va_start(params, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (controller[j].type)
		{
			if (format[i] == *(controller[j].type))
			{
				printf("%s", separator);
				controller[j].f(params);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(params);
	printf("\n");
}
