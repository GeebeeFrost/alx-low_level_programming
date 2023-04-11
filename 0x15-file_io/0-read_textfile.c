#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to
 * standard output
 * @filename: Name of text file to be read
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t actual_read, actual_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	actual_read = read(fd, buffer, letters);
	if (actual_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[actual_read] = '\0';
	close(fd);
	actual_written = write(STDOUT_FILENO, buffer, actual_read);
	if (actual_written < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (actual_written);
}
