#include <stdlib.h>

/**
 * **alloc_grid - prints an NxM matrix
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: the grid @grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid; /* helps us point to each height index */

	if (width <= 0 || height <= 0) /* check invalid dimensions */
		return (NULL);

	grid = malloc(sizeof(int *) * height); /* allocate j-axis memory */

	if (grid == NULL) /* if no memory */
		return (NULL);

	for (i = 0; i < height; i++) /* loop down rows */
	{
		grid[i] = malloc(sizeof(int) * width); /* set memory for row */

		if (grid[i] == NULL) /* if row index has no memory */
		{
			while (i-- >= 0) /* delete the entire griday */
			{
				free(grid[i]);
			}
			free(grid);

			return (NULL);
		}

		for (j = 0; j < width; j++) /* set each index to value "0" */
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
