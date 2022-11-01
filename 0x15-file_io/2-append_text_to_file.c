#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: file content
 * Return: 1 if succes, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nl;
	int bwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;

		bwr = write(fd, text_content, nl);

		if (bwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

