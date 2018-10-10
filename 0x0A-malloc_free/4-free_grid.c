#include <stdlib.h>

/**
 * free_grid - removes 2D->1d memory
 * @grid: ptr to the two dimensional grid
 * @height: height of the grid passed as argument
 * Return: none
 */

void free_grid(int **grid, int height)
{
	while (height-- >= 0) /* start at last index and iterate up */
	{
		free(grid[height]); /* free the row's memory */
	}
	free(grid); /* free the ptr to the grid itself */
}
