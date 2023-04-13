#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Copies content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *buffer;
	int fd_from, fd_to;
	int writing;
	ssize_t actual_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(1024);
	fd_from = open(argv[1], O_RDONLY);
	actual_read = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	do {
		if (fd_from < 0 || actual_read < 0)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writing = write_to_file(fd_to, buffer, actual_read);
		if (writing < 0)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		actual_read = read(fd_from, buffer, 1024);
	} while (actual_read > 0);
	free(buffer);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}

/**
 * write_to_file - Writes text to a file
 * @fd: File descriptor of file to be written to
 * @text_content: Text to be written
 * @size: Size of text read
 *
 * Return: 1 on success or -1 on failure
 */
int write_to_file(int fd, char *text_content, ssize_t size)
{
	ssize_t written;

	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	written = write(fd, text_content, size);
	if (written < 0)
		return (-1);
	return (1);
}

/**
 * close_fd - Closes a file descriptor
 * @fd: File descriptor to be closed
 */
void close_fd(int fd)
{
	int c = close(fd);

	if (c < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - Creates a buffer to hold content
 * to be copied
 * @bytes: Size of buffer in bytes
 *
 * Return: Pointer to buffer
 */
char *create_buffer(size_t bytes)
{
	char *buffer = malloc(sizeof(char) * bytes);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
				"Error: Not enough space to copy.\n");
		exit(96);
	}
	return (buffer);
}
