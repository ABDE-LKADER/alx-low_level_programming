#include <stdlib.h>
#include "main.h"

/**
 * free_grid -> Frees 2 dimensional Array Allocated
 *
 * @grid: Input Grid
 * @height: Input Height
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
