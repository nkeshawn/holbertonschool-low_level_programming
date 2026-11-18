#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function creates an array of chars and initialises it
 * @size: size of the array
 * @c: character to be initialised
 *
 * Return:
 * if is successful, pointer to the array
 * if it fails or size = 0, NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
