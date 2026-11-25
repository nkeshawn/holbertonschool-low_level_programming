#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name inputted
 * @f: function that prints the name in specified format
 *
 * Return: always nothing (successful).
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
