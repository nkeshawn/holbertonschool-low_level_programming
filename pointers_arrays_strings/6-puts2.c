#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string to be printed
 *
 * Return: always nothing.
 */

void puts2(char *str)
{
	int length;

	length = 0;

	if (str)
	{
		while (str[length] != '\0')
		{
			_putchar(str[length]);
			length += 2;
		}
	}
	_putchar('\n');
}
