#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * @str: copy of string stored in memory
 *
 * Return:
 * if is successful, pointer to duplicated string
 * if it fails or string = NULL, return NULL
 */

char *_strdup(char *str)
{
	unsigned int size;
	unsigned int i;
	char *array;

	size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	/**
	 * size + 1 because you need to account for the null terminator
	 * null terminator not accounted for when calculating size
	 */
	for (i = 0; i < (size + 1); i++)
		array[i] = str[i];

	return (array);
}
