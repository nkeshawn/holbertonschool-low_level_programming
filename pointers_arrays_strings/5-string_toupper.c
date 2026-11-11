#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @s: string to be processed
 *
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] >= 97 && s[count] <= 122)
			s[count] = s[count] - 32;
	}

	return (s);
}
