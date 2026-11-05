#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10, starting from 0.
 * Return: always 0 (success).
 */

int main(void)
{
int a;
a = 0;

while (a < 10)
{
	printf("%d", a);
	a++;
}
putchar('\n');

return (0);
}
