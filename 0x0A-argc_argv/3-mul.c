#include <stdio.h>
#include <stdlib.h>

/**
 * main - execuitng function
 * @argc: counter
 * @argv: vector
 * Return: 0 if success, else 1.
 */

int main(int argc, char *argv[])
{
	int calc;

	if (argc == 3)
	{
		calc = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", calc);
	}
	else
		printf("Error\n");

	return (0);
}

