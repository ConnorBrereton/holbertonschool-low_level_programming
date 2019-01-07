#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * description - generate randnum and check conditions on last digit
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %i is %i and is 0\n", n, ld);
	else if (ld < 6 && ld != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ld);
	return (0);
}
