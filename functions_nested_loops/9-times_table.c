#include "main.h"

/**
 * times_table - function that prints the 9 times table.
 *
 * Return: always nothing.
 */

void times_table(void)
{

	int firstDigit;
	int result;
	int iterations;

	firstDigit = 0;

	while (firstDigit < 10)
	{
		iterations = 0;

		while (iterations < 10)
		{
			result = firstDigit * iterations;

			if (result < 10)
			{
				if (iteration != 0)
					_putchar(' ');

				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (iterations < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		iterations++;
		}
	_putchar('\n');
	firstDigit++;
	}
}
