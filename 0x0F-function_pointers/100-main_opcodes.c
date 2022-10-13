#include <stdlib.h>
#include <stdio.h>

/**
 * main - exucting path
 * @argc: argument count
 * @argv: argument values
 * Return: 0 if successful else
 */

int main(int argc, char *argv[])
{
	char *cp = (char *)main;

	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *(cp + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

