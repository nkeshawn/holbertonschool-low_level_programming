#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be evaluated
 *
 * Return: integer from the string.
 */

int _atoi(char *s)
{
	int a;
	int sign;
	int store;

	a = 0;
	sign = 1;
	store = 0;

	while (s[a] != '\0' && (s[a] < '0' || s[a] > '9'))
	{
		if (s[a] == '-')
			sign = -1 * sign;
		a++;
	}

	while (s[a] >= '0' && s[a] <= '9')
	{
		if (sign == -1)
			store = store * 10 - (s[a] - '0');
		else
			store = store * 10 + (s[a] - '0');
		a++;
	}

	return (store);
}
