#include "3-calc.h"

/**
 * op_add - function performs addition
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: result of a plus b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function performs subtraction
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: result of a minus b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function performs multiplication
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: result of a multiply b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function performs division
 *
 * @a: integer a
 * @b: integer b
 *
 * Return:
 * if b != 0, result of a divide b
 * if b == 0, print Error and exit with status 100
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function performs modulo
 *
 * @a: integer a
 * @b: integer b
 *
 * Return:
 * if b != 0, return remainder of a divide b
 * if b == 0, print Error and exit with status 100
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
