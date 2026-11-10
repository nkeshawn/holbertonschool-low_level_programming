#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to be printed
 *
 * Return: always nothing.
 */

void _puts(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
