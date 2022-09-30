#include <stdio.h>
#include "main.h"
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
		printf("%d\n", argc - 1);
	}

	return (0);
}

