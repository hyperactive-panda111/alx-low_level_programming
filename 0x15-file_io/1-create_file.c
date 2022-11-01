#include "main.h"

/**
 * create_file - creates file
 * @filename: name of file
 * @content: characters written into file
 * Return: 1 if success, -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nb;
	int nw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (nb = 0; text_content[nb]; nb++)
		;

	nw = write(fd, text_content, nb);

	if (nw == -1)
		return (-1);

	close(fd);

	return (1);
}

