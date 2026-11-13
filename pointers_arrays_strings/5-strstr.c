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
	int x;
	int y;

	x = 0;

	if (*needle == '\0')
		return (haystack);

	while (haystack[x] != '\0')
	{
		y = 0;

		while (haystack[x + y] == needle[y])
		{
			y++;

			if (needle[y] == '\0')
				return (&haystack[x]);
		}

		x++;
	}

	return ('\0');
}
