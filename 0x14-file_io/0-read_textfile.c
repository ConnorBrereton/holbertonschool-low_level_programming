#include "holberton.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads n-bytes from file to stdout
 * using the POSIX API.
 *
 * @filename: Pointer to first char in file to open
 *
 * @letters: Number of bytes to write
 *
 * Return: 0 (failure) check_read (success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int check_open, check_read, check_write;

	char *buffer;

	if (!filename || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	check_open = open(filename, O_RDONLY);

	if (check_open < 0)
	{
		free(buffer);
		return (0);
	}

	check_read = read(check_open, buffer, letters);

	if (check_read < 0)
	{
		free(buffer);
		close(check_open);
		return (0);
	}

	check_write = write(STDOUT_FILENO, buffer, check_read);

	if ((unsigned int) check_write != letters)
		return (0);

	free(buffer);
	close(check_open);

	return (check_read);
}
