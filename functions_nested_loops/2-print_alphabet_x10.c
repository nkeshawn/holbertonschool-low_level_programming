#include "main.h"

/**
 * print_alphabet_x10- function that prints lowercase alphabet 10 times.
 * Return: always nothing (success).
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	b = 0;

	while (b < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
	b++;
	_putchar('\n');
	}
}
