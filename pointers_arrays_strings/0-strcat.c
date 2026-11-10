#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int start;
	int end;

	start = 0;

	while (dest[start] != '\0')
		start++;

	for (end = 0; src[end] != '\0'; end++)
	{
		dest[start] = src[end];
		start++;
	}

	dest[start] = '\0';
	return (dest);
}
