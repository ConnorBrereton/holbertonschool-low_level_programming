#include "function_pointers.h"

/**
 * print_name - runs checks, points to fcn to call @name
 * @name: name to be printed
 * @f: pointer to the function print_name_as_is()
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
