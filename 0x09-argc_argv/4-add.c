#include <stdio.h>
#include <stdlib.h>


/**
 * not_digit - verifies input as digit
 * @c: character to check
 * Return: 0 (digits only) 1 (found character)
 */

int not_digit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}


/**
 * _ischar - verifies input as non-alpha
 * @s: pointer to string
 * Return: 0 (digits only) 1 (found character)
 */

int _ischar(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (not_digit(s[i]) == 1)
			return (1);
	}
	return (0);
}


/**
 * main - adds two numbers passed as argument
 * @argc: the size of the array to hold the command line args
 * @argv: pointer to array that holds the arguments
 * Return: 0 (produce digits) 1 (produce error)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	/* if no numbers passed */
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	/* add each valid argv index */
	for (i = 1; i < argc; i++)
	{
		if (_ischar(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
