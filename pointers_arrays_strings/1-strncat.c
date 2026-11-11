#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: first half of string
 * @src: second half of string
 * @n: no. of characters to take from the second string
 *
 * Return: pointer to a character.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int count;

	length = 0;
	count = 0;

	while (dest[length] != '\0')
		length++;

	for (count = 0; count < n && src[count] != 0; count++)
	{
		dest[length] = src[count];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
