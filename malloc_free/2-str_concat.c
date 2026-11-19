#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - function that returns length of string
 * @s: string
 *
 * Return: length of string
 */

unsigned int _strlen(char *s)
{
	unsigned int size;

	size = 0;

	while (s[size] != '\0')
		size++;

	return (size);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: first half of string
 * @s2: second half of string
 *
 * Return:
 * if is successful, pointer containing concatenated strings
 * if it fails, return null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size;
	unsigned int i;
	char *array;

	size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = _strlen(s1) + _strlen(s2) + 1;

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if (i < _strlen(s1))
			array[i] = s1[i];
		else
			array[i] = s2[i - _strlen(s1)];
	}
	return (array);
}
