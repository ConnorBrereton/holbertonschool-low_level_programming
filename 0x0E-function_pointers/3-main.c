#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates two numbers using operator
 *
 * @argc: size of the CLI argument array
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char *op;
	int (*f)(int a, int b);

	/* validate correct # args */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* gets the CLI args */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	/* ensures only operator character */
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	/* check valid operator */
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	/* get the operator and compute */
	f = get_op_func(op);
	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
