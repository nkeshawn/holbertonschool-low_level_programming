#include "main.h"

/**
 * print_line - function that draws a straight line.
 * @n: number of times to print _
 *
 * Return: always nothing.
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
		for (; n > 0; n--)
			_putchar('_');
		_putchar('\n');
}
