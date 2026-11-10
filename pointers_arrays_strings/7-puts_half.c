#include "main.h"

/**
 * puts_half - function that prints second half of a string
 * @str: string to be evaluated
 *
 * Return: always nothing.
 */

void puts_half(char *str)
{
	int length;
	int first_half;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (first_half = length / 2; first_half < length; first_half++)
			_putchar(str[first_half]);
	}
	else
	{
		for (first_half = (length + 1) / 2; first_half < length; first_half++)
			_putchar(str[first_half]);
	}

	_putchar('\n');
}
