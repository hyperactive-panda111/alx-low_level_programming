#include <stdio.h>
#include <time.h>
#inlcude < stdlib.h >

/**
 *main - determines if an number is positve, negative or zero
 *
 *Return: Always 0(Success)
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d is positve", n);
	}
	if else (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}

	return (0);
}
