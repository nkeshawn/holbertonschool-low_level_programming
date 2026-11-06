#include "main.h"

/**
 * print_triangle - function that draws a triangle.
 * @size: height of square.
 *
 * Return: always nothing.
 */

void print_triangle(int size)
{
	int space;
	int hash;
	int row;

	if (size <= 0)
		_putchar('\n');
	
	else
	{
		for (row = 1; row <= size; row++)
		{	
			for (space = 0; space < (size - row); space++)
				_putchar(' ');
			for (hash = 0; hash < row; hash++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
