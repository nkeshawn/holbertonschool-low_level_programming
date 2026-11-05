#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10, starting from 0, without using printf.
 * Return: always 0 (success).
 */

int main(void)
{
int a;
a = 48;

while (a < 58)
{
	putchar(a);
	a++;
}
putchar('\n');

return (0);
}
