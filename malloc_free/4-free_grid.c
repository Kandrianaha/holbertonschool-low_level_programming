#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2D grid
 * @grid: the 2D grid
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
