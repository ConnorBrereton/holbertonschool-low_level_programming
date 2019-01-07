#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of this function
 * @argc: number of arguments in CLI
 * @argv: array of arguments in CLI
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i, end, opcode;
	int (*ptr)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	else if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* sets function pointer to main */
	ptr = main;

	/* number of opcodes to print */
	end = atoi(argv[1]);

	/* prints each "chunk" of opcode */
	for (i = 0; i < end; i++)
	{
		opcode = *(unsigned char *)(ptr + i);
		printf("%.2x", opcode);

		if (i < end - 1)
			printf(" ");
	}
	putchar('\n');
	return (0);
}
