#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: name of textfile
 * @letters: number of characters
 * Return: number of characters succesfully read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t bw, br;
	char *p;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	p = malloc(sizeof(char) * letters);
	if (p == NULL)
		return (0);

	br = read(fd, p, letters);
	bw = write(STDOUT_FILENO, p, br);

	close(fd);

	free(p);

	return (bw);
}

