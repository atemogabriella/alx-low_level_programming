#include "main.h"
#include <stdlib.h>
/**
 *free_grid - area where memory of 2 dimensional grid of integers is freed
 *@grid: grid pointer
 *@height: height of grid
 *Return: memory freed
 */
void free_grid(int **grid, int height)
{
	int q;

	for (q = 0; q < height; q++)
	{
		free(grid[q]);
	}

	free(grid);
}
