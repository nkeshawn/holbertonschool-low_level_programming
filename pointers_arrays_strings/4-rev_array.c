#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 *
 * Return: always nothing.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int count;

	for (count = 0; count < n; count++)
	{
		temp = a[count];
		a[count] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
