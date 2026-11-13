#include "main.h"

/**
 * _strpbrk - function that searches a string
 * @s: string to be processed
 * @accept: accpeted characters
 *
 * Return: pointer to byte that matches one of the accepted characters.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int counter;

	while (*s != '\0')
	{
		for (counter = 0; accept[counter] != '\0'; counter++)
		{
			if (*s == accept[counter])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
