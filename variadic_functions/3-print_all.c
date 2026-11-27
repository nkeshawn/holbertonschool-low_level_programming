#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>



/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments
 *
 * Return: always nothing (successful)
 */


void print_all(const char * const format, ...)
{
	va_list list;
	char *s;
	int counter;
	char *separator;

	counter = 0;
	separator = "";

	va_start(list, format);

	while (format[counter] != '\0')
	{
		switch (format[counter])
		{
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
				{
					printf("%s(nil)", separator);
					break;
				}
				printf("%s%s", separator, s);
				break;
		}
	separator = ", ";
	counter++;
	}
	va_end(list);
	printf("\n");
}
