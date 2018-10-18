#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - returns pointer to the appropriate function
 * @s: operator passed to the program
 * Return: pointer to the operators index
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	/* loop through operators */
	while (*(ops[i].op))
	{
		/* check CLI operator is valid */
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
