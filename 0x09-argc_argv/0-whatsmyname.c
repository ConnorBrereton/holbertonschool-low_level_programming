#include <stdio.h>

/**
 * main - prints the string held in argv[0]
 * @argc: the size of the array to hold the command line args
 * @argv: pointer to array that holds the arguments
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
}
