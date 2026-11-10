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
			length++;

			for (int i = 0; i < length; i += 2)
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
