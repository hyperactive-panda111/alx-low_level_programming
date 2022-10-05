#include "main.h"
#include <stdlib.h>

/**
 * free_grid - releases dynamically allocated array
 * @grid: array
 * @height: dimension
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
	free(grid);
	}
}

