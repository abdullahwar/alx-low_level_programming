#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees the memory allocated for a 2D array.
 * @grid: The 2D grid to be freed.
 * @height: The height dimension of the grid.
 *
 * Description: This function releases the memory used by the 2D array 'grid'.
 *
 * Return: Nothing.
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


