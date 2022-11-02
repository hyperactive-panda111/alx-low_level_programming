#include "main.h"
/**
 * main - code checker
 * @argc: argument count
 * @argv: argumemt vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, rd_stat, wr_stat;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", argv[2]), exit(99);
	rd_stat = 1;
	while (rd_stat)
	{
		rd_stat = read(file_from, buff, 1024);
		if (rd_stat == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (rd_stat > 0)
		{
			wr_stat = write(file_to, buff,  rd_stat);
			if (wr_stat != rd_stat || wr_stat == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}


