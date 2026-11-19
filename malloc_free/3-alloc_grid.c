#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2d array of integers
 * @width: width of 2d array
 * @height: height of 2d array
 *
 * Return:
 * if it fails or width and height is 0 or negative, return null
 * if it succeeds, return a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*allocate the pointers*/
	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/*allocate the integers*/
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			while (i > 0)
			{
				/* free previously allocated rows
				 * current integer failed, so free previous ones */
				free(array[--i]);
			}
		/*free array of pointers*/
		free(array);
		return (NULL);
		}

		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
