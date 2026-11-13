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
	int counter;
	int length;

	counter = 0;
	length = 0;

	while (s[length] != '\0')
		length++;

	while (s[counter] != '\0' && s[counter] != c)
		counter++;

	if (counter == length)
		return (NULL);
	else
		return (&s[counter]);
}
