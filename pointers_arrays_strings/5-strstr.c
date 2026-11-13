#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to be evaluated
 * @needle: substring to be found
 *
 * Return: pointer to beginning of located substring or null if nothing found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);

		haystack++;
	}

	return ('\0');
}
