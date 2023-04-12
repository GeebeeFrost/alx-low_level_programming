#include "main.h"
#include <stdio.h>
#include <string.h>
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
	int writing;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = read_from_file(argv[1], 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	writing = write_to_file(argv[2], buffer);
	if (writing < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	free(buffer);
	return (0);
}

/**
 * read_from_file - Reads the content to be copied into a buffer
 * @filename: Name of file to be copied
 * @bytes: Number of bytes to be read from file
 *
 * Return: Buffer containing text to be copied
 * or NULL if there is an error
 */
char *read_from_file(const char *filename, size_t bytes)
{
	int fd, closing;
	ssize_t actual_read;
	char *buffer;

	if (filename == NULL)
		return (NULL);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	buffer = malloc((sizeof(char) * 1024) + 1);
	if (!buffer)
		return (NULL);
	actual_read = read(fd, buffer, bytes);
	if (actual_read < 0)
	{
		free(buffer);
		return (NULL);
	}
	buffer[actual_read] = '\0';
	closing = close(fd);
	if (closing < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		free(buffer);
		exit(100);
	}
	return (buffer);
}

/**
 * write_to_file - Writes text to a file
 * @filename: Name of file
 * @text_content: Text to be written
 *
 * Return: 1 on success or -1 on failure
 */
int write_to_file(const char *filename, char *text_content)
{
	int fd, length, closing;
	ssize_t written;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	length = strlen(text_content);
	written = write(fd, text_content, length);
	if (written < 0)
		return (-1);
	closing = close(fd);
	if (closing < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
}
