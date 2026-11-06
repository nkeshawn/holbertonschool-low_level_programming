#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: The number to check
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last >= 0)
	{
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar((last * -1) + '0');
		return (last * -1);

	}
}
