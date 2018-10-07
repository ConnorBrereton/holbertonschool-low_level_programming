#include <stdio.h>

/**
 * main - prints the number of arguments passed into program
 * @argc: the size of the array of arguments
 * @argv: pointer to array that holds arguments
 * Return: 0 (success) -1 (failure)
 */

int main(int argc, char *argv[])
{
	if (*argv == '\0')
		return (-1);

	printf("%d\n", argc - 1);
	return (0);
}
