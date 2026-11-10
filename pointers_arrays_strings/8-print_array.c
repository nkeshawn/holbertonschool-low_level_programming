#include <stdio.h>
#include "main.h"

/**
 * print_array - function that print n elements of an array of integers
 * @a: array
 * @n: number of elements to be printed
 *
 * Return: always nothing.
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == n - 1)
			printf("%d", a[b]);
		else
			printf("%d, ", a[b]);
	}

	printf("\n");
}
