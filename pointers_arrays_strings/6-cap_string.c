#include "main.h"

/**
 * cap_string - function that capitalises first letter of each word in a string
 * @s: string
 *
 * Return: the capitalised string
 */

char *cap_string(char *s)
{

	int length;
	int count;

	char a[] = {' ', '\t', '\n', ',', ';', '.', '!',
		    '?', '"', '(', ')', '{', '}'};

	for (length = 0; s[length] != '\0'; length++)
		if (length == 0 && s[length] >= 'a' && s[length] <= 'z')
			s[length] = s[length] - 32;
		else
			for (count = 0; count < 13; count++)
			{
				if (s[length - 1] == a[count] && s[length] >= 'a'
				&& s[length] <= 'z')
					s[length] = s[length] - 32;
			}

	return (s);
}
