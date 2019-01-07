#include <unistd.h>

/**
 * main - entry point for program
 *
 * Description: print a string using a character array
 *
 * Return: always 1 (success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
