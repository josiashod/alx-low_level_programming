#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by the alloc_grid
 * function.
 *
 * @grid: the 2 dimensional grid pointer
 * @height: the grid height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
