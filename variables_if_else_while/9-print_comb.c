#include<stdio.h>

/**
 * main - prints all possible single-digit numbers i.e. 0, 1, ... ,9
 *        in ascending order, only putchar is allowed.
 * Return: always 0 (success).
 */

int main(void)
{
int a;
a = 0;

while (a < 10)
{
	putchar(a + '0');
	a++;

	if (a != 10)
	{
		putchar(',');
		putchar(' ');

	}
}
putchar('\n');

return (0);
}
