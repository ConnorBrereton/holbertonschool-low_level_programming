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
	int i, end;

	/* 
	 * cast the pointer to the first byte of code
	 * (read: main) as a char in order to run
	 * iterations on the code.
	 */
	unsigned char *opcode;
	opcode = (unsigned char *) main;

	/* number of opcodes to print */
	end = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* prints each "chunk" of opcode */
	for (i = 0; i < end && *(opcode + i) != '\0'; i++)
	{
		printf("%0.2x", *(opcode + i));

		if (i != end)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
