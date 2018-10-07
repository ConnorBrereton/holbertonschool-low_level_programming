#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as argument
 * @argc: the size of the array to hold the command line args
 * @argv: pointer to array that holds the arguments
 * Return: 0 (success) -1 (failure)
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int sum = 0;

	/* check that 2 numbers entered*/
	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	sum = a * b;

	printf("%d\n", sum);
}
