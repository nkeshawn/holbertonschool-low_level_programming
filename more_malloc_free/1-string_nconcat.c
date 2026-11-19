#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first half of string
 * @s2: second half of string
 * @n: number of bytes of s2
 *
 * Return:
 * if it succeeds, return the string
 * if it fails, return null.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1;
	unsigned int i;
	unsigned int j;
	char *array;

	i = 0;
	length_s1 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		length_s1++;
		i++;
	}

	array = malloc((length_s1 + n + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		array[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		array[i + j] = s2[j];
	}

	array[i + j] = '\0';

	return (array);

}

