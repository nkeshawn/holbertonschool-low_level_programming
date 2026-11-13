#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be evaluated.
 * @c: character to be located.
 *
 * Return: pointer to the first occurrence of character c OR NULL, if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}

	return ('\0');
}
