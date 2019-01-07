#include <stdio.h>
#include <stdlib.h>

int find_end(char *s, unsigned int i)
{
	int end = 0;

	for (i = 0; *(s + i) != '\0'; i++)

	end = i;

	return (end);
}

void foo(char *s)
{
	int first = find_end(end);

	if (!s)
		return (-1);

	s >>= 1;

	s[0] = s[first];
}
