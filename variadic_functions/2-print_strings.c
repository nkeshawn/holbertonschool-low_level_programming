#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - function that prints strings
 *
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 * Return: always nothing (successful).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	i = 1;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	while (i <= n)
	{
		string = va_arg(list, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (i <= n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(list);
}
