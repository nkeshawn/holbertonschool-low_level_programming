#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14, ten times.
 *
 * Return: always nothing.
 */

void more_numbers(void)
{
	char a;
	int b;

	a = 0;

	for (b = 0; b < 10; b++)
	{
		while (a < 15)
		{
			if (a > 9 && a < 15)
				_putchar('1');
			_putchar((a % 10) + '0');
			a++;
		}
	a = 0;
	_putchar ('\n');
	}
}
