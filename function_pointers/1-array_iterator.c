#include "function_pointers.h"

/**
 * array_iterator - function that executes a function as a parameter
 * @array: name of the array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: always nothing (successful).
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
