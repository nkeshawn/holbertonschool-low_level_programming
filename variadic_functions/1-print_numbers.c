#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 *
 * @separator: string between numbers
 * @n: number of integers
 *
 * Return: always nothing (successful).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	i = 1;

	va_start(list, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator == NULL)
		separator = "";

	if (n == 0)
		printf("\n");

	while (i < n)
	{
		printf("%d%s", va_arg(list, int), separator);
		i++;
	}
	printf("%d\n", va_arg(list, int));

	va_end(list);
}
