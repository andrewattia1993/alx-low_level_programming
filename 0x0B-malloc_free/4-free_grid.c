#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a grid
 * @grid: grid to be freed
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[i]);
	}
	free(grid);
}
