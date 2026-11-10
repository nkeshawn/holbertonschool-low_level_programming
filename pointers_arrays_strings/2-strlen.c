#include "main.h"

/**
 * _strlen - function that returns the length of the string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length;

	while (s[length] != '\0')
		length++;

	return (length);
}
