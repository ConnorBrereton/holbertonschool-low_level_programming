#include <stdio.h>
#include <stdlib.h>

/**
* main - minimum # coins to return change (in cents)
* @argc: size of @argv array
* @argv: pointer to array of arguments
* Return: 1 (fail) 0 (success)
*/

int main(int argc, char *argv[])
{
	int coins = 0;
	int input;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = atoi(argv[1]);

	if (input < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; input >= 25; coins++)
	{
		input -= 25;
	}
	for (; input >= 10; coins++)
	{
		input -= 10;
	}
	for (; input >= 5; coins++)
	{
		input -= 5;
	}
	for (; input >= 2; coins++)
	{
		input -= 2;
	}
	for (; input >= 1; coins++)
	{
		input -= 1;
	}
	printf("%d\n", coins);
	return (0);
}
