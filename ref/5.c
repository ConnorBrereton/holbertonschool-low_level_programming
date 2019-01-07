#include <stdio.h>
#include <stdlib.h>

void puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s + 1);
	}

	else
		return;
}
