#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers passed as argument
 * @argc: the size of the array to hold the command line args
 * @argv: pointer to array that holds the arguments
 * Return: 0 (success) 1 (non-valid)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	/* add each valid argv index */
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
