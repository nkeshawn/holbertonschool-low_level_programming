#include "main.h"

/**
 * print_square - function that draws a square.
 * @size: length of square
 *
 * Return: always nothing.
 */

void print_square(int size)
{
	int length;
	int width;

	for (length = 0; length < size; length++)
	{
		for (width = 0; width < size; width++)
			_putchar('#');

		_putchar('\n');
	}
}
