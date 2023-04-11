#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: String to be added at the end of the file
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t written;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	length = strlen(text_content);
	written = write(fd, text_content, length);
	if (written < 0)
		return (-1);
	return (1);
}
