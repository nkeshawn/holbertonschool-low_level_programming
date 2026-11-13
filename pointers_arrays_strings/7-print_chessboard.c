#include "main.h"

/**
 * print_chessboard - function that prints a 2d array
 * 
 * Return: always nothing.
 */

void print_chessboard(char (*a)[8])
{
	for (int row = 0; row < 8; row++)
	{
		for (int column = 0; column < 8; column++)
			_putchar(a[row][column]);
	_putchar('\n');
	}
}
