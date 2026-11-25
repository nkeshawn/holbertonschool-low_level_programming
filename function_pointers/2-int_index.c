#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: name of array
 * @size: size of array
 * @cmp: pointer to function that compare values
 *
 * Return:
 * if size <= 0 or no element matches, return -1
 * if successful, return index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	result = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result > 0)
			return (i);
	}
		return (-1);
}
