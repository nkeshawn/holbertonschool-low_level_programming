#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - function that creates an array of integers
 * @min: the smallest value of the array
 * @max: the largest value of the array
 *
 * Return:
 * if it succeeds, pointer to the array
 * if it fails or min > max, return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int counter;

	counter = 0;

	if (min > max)
		return (NULL);

	array = malloc((max - min) * sizeof(int));

	if (array == NULL)
		return (NULL);

	while (min < max)
	{
		array[counter] = min;
		min++;
		counter++;
	}

	return (array);
}
