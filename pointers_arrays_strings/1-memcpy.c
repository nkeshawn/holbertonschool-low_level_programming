#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination of code.
 * @src: source of code.
 * @n: number of bytes to copy.
 *
 * Return: pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		dest[counter] = src[counter];

	return (dest);
}
