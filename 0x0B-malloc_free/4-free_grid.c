#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocaed to the 2D array
 * @grid: Pointer to the 2D array
 * @height: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
