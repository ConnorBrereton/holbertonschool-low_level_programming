#include <stdio.h>

/**
 * main - prints the string held in argv[0]
 * @argc: the size of the array to hold the command line args
 * @argv: pointer to array that holds the arguments
 * Return: 0 (success) -1 (failure)
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	if (!*argv)
	{
		return (-1);
	}
	else
	{
		printf("%s\n", argv[0]);
		return (0);
	}
}
