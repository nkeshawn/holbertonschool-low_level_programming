#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: String.
 *
 * Return: always nothing.
 */

void rev_string(char *s)
{
	int length;
	int start;
	int end;
	char temp;

	length = 0;

	while (s[length] != '\0')
		length++;

	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
