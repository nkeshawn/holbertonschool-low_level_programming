#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @src: source
 * @dest: destination
 *
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
