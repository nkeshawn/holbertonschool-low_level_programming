#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: pointer to grid array
 * @height: height of grid
 *
 * Return: always nothing (successful).
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
