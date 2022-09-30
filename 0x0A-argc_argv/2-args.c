#include <stdio.h>

/**
 * main - executing function
 * argc: count
 * argv: vector
 * Return: 0 if success, else 1
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}

