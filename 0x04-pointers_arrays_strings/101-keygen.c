#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_MAX 2772
#define NUM_MIN 64

/**
 * main - generate random values up to 2772
 *
 * Return: 0 success
 */

int main(void)
{
	int i = 0;
	int seed = 0;

	srand(time(NULL));

	for (; seed <= (NUM_MAX - NUM_MIN); seed += i)
	{
		i = (rand() % (90 - 65) + 65);
		putchar(i);
	}

	printf("%c", NUM_MAX - seed);
	return (0);
}
