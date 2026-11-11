#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string to be stored here
 * @src: string to be copied from here
 * @n: number of characters to copy
 *
 * Return: pointer to a string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

		for (count = 0; count < n && src[count] != '\0'; count++)
		{
			dest[count] = src[count];
		}

		while (count < n)
		{
			dest[count] = '\0';
			count++;
		}

	return (dest);
}
