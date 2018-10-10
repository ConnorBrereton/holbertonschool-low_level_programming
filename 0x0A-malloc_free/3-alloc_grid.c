#include <stdlib.h>

/**
 * **alloc_grid - prints an NxM matrix
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: the grid @arr
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr; /* helps us point to each height index */

	if (width <= 0 || height <= 0) /* check invalid dimensions */
		return (NULL);

	arr = malloc(sizeof(int *) * height); /* allocate j-axis memory */

	if (arr == NULL) /* if no memory */
		return (NULL);

	for (i = 0; i < height; i++) /* loop down rows */
	{
		arr[i] = malloc(sizeof(int) * width); /* set memory for row */

		if (arr[i] == NULL) /* if row index has no memory */
		{
			while (i-- >= 0) /* delete the entire array */
			{
				free(arr[i]);
			}
			free(arr);

			return (NULL);
		}

		for (j = 0; j < width; j++) /* set each index to value "0" */
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
