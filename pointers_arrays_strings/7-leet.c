#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string to be processed
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int count1;
	int count2;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	count1 = 0;
	count2 = 0;

	while (s[count1] != '\0')
	{
		for (count2 = 0; count2 < 10; count2++)
		{
			if (s[count1] == letter[count2])
				s[count1] = num[count2];
		}

	count1++;
	}

	return (s);
}
