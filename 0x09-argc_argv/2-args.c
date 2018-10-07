#include <stdio.h>

/**
 * main - prints string in each argv array
 * @argc: the size of the array to hold the command line args
 * @argv: pointer to array that holds the arguments
 * Return: 0 (success) -1 (failure)
 */

int main(int argc, char *argv[])
{
	int i;

	if (*argv == '\0')
		return (-1);

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
