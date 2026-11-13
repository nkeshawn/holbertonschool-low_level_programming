#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: address of memory area
 * @b: byte to be stored
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter;

		for (counter = 0; counter < n; counter++)
			s[counter] = b;

	return (s);
}
