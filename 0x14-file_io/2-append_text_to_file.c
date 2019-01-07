#include "holberton.h"
#include <fcntl.h>

/**
 * append_text_to_file - Appends text to end of file
 *
 * @filename: Pointer to file to write to
 *
 * @text_content: Pointer to chars to write
 *
 * Return: 1 (success) -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, check_open, check_write;

	check_open = check_write = 0;

	if (!filename)
		return (-1);

	check_open = open(filename, O_APPEND | O_WRONLY);

	if (check_open < 0)
		return (-1);

	if (!text_content)
	{
		close(check_open);
		return (1);
	}

	while (text_content && *(text_content + i))
		i++;

	check_write = write(check_open, text_content, i);

	if (close(check_open) < 0 || i != check_write)
		return (-1);

	return (1);
}
