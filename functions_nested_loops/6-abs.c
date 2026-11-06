#include "main.h"

/**
 * _abs - function that computes absolute value of an integer.
 * @n: The number to check
 *
 * Return: n if n is greater than or equal to zero
 *         -n if n is less than zero
 *         -1 if n is less than zero
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
