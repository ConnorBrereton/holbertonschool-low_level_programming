#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int check_close(int fd);
void err_read(char *fd);
void err_wr(char *fd);

/**
 * check_close - Handles close() errors
 *
 * @fd: CLI argument specifier
 *
 * Return: (-1) failure (1) success
 */

int check_close(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd;
		return (-1);
	}

	return (1);
}


/**
 * err_read - Handles read() errors
 *
 * @fd: Pointer to file to read
 *
 * Return: none
 */

void err_read(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd);
}


/**
 * err_wr - Handles write() errors
 *
 * @fd: Pointer to file to read
 *
 * Return: none
 */

void err_wr(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd);
}


/**
 * main - Implementation of cp. Copies one file to another
 *
 * @argc: Number of CLI arguments. (Index from 1)
 *
 * @argv: Array of arguments on the CLI
 *
 * Return: (#) see case (0) success
 */

int main(int argc, char **argv)
{
	char buffer[1024];

	int check_open1, check_open2, check_read, check_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	check_open1 = open(argv[1], O_RDONLY);
	if (check_open1 < 0)
	{
		err_read(argv[1]);
		exit(98);
	}

	check_open2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (check_open2 < 0)
	{
		err_wr(argv[2]);
		close(check_open1);
		exit(99);
	}

	while (check_read)
	{
		check_read = read(check_open1, buffer, 1024);
		if (check_read < 0)
		{
			err_read(argv[1]);
			close(check_open1);
			close(check_open2);
			exit(98);
		}

		check_write = write(check_open2, buffer, check_read);
		if (check_write < 0)
		{
			err_wr(argv[2]);
			close(check_open1);
			close(check_open2);
			exit(99);
		}
	}

	if (check_close(check_open1) < 0)
		exit(100);

	if (check_close(check_open2) < 0)
	{
		close(check_open1);
		exit(100);
	}

	return (0);
}
