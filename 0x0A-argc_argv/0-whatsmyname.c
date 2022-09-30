#include "main.h"
#include <stdio.h>
/**
 * main - execution path
 * @argc: count of command line argument(s)
 * @argv: command line argumenents
 * Return: execution status
 */

int main(int argc, char *argv[])
{
	int i;

	while (argc--)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}

