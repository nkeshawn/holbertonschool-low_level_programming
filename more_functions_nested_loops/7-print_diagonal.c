#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line.
 * @n: number of times to print \ diagonally.
 *
 * Return: always nothing.
 */

void print_diagonal(int n)
{
	int spaces;
	int slash;

	if (n <= 0)
		_putchar('\n');

	for (slash = 0; slash < n; slash++)
	{
		for (spaces = 0; spaces < slash; spaces++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
