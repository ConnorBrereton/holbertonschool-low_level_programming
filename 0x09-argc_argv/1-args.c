#include <stdio.h>

/**
 * main - prints the number of arguments passed into program
 * @argc: the size of the array of arguments
 * @argv: pointer to array that holds arguments
 */

int main(int argc, char *argv[])
{
	
	if (!*argv)
	{
		return (0);
	}

	else
	{
		printf("%d\n", argc);
	}
}
