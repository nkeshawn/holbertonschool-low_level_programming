#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: no. of bytes
 *
 * Return:
 * if it succeeds, pointer to allocated memory
 * if it fails, exit status 98.
 */

void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
		exit(98);

	return (array);
}
