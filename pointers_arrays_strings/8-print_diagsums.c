#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of 2 diagonals
 * @a: pointer to integer
 * @size: size of the matrix
 *
 * Return: always nothing.
 */

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i;

	sum1 = 0;
	sum2 = 0;
	i = 0;

	while (i < size)
	{
		/* formula = (row x size) + column */
		sum1 += a[(i * size) + i];
		sum2 += a[(i * size) + (size - 1 - i)];
		i++;
	}

	printf("%d, %d\n", sum1, sum2);
}
