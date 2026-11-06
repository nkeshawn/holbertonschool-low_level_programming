#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints integer n to 98.
 * @n: first integer to be printed
 *
 * Return: nothing.
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	printf("%d\n", n);
}
