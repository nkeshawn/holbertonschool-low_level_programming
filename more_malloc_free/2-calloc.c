#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: no. of elements
 * @size: no. of bytes each
 *
 * Return:
 * if it succeeds, return pointer
 * if it fails or either nmemb or size is 0, return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	array = malloc(nmemb * size);

	if (array == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
