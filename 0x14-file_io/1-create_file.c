#include "holberton.h"
#include <fcntl.h>

/**
 * create_file - Opens a file and writes chars
 * from text_content to filename
 *
 * @filename: Pointer to file to write to
 *
 * @text_content: Pointer to chars to copy
 *
 * Return: 1 (success) -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int i, check_open, check_write;

	char *text = text_content;

	check_open = check_write = 0;

	if (!filename)
		return (-1);

	check_open = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (check_open < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; *text; text++)
			i++;

		check_write = write(check_open, text, i);
	}

	if (close(check_open) < 0 || i != check_write)
		return (-1);

	return (1);
}
