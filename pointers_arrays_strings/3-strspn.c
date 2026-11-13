#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be evaluated
 * @accept: accepted characters in the string
 *
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter;
	unsigned int found;
	unsigned int a;

	counter = 0;

	while (*s != '\0')
	{
		found = 0;
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
			break;

		counter++;
		s++;
	}

	return (counter);
}
