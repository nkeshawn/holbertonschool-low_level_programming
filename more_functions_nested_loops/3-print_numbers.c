#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * 
 * Return: always nothing.
 */

void print_numbers(void)
{
	char a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
