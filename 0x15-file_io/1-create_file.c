#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: Text content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t actual_written;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	length = strlen(text_content);
	actual_written = write(fd, text_content, length);
	if (actual_written < 0)
		return (-1);
	return (1);
}
