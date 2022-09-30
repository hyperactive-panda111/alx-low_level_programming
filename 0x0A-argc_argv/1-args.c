#include <stdio.h>

/**
 * main - execution path
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if success, else 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%d", argc);
	}

	return (0);
}

