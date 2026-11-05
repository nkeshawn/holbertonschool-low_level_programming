#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10, starting from 0
 *        without using printf.
 * Return: always 0 (success).
 */

int main(void)
{
/*
 * method 1: convert 0 to ascii decimal manually
 *
 * int a;
 * a = 48;
 *
 * while (a < 58)
 * {
 *	putchar(a);
 *	a++;
 *	}
 */

/*
 * method 2: add '0' (numberic value 48) to the integer.
 */
int a;
a = 0;

while (a < 10)
{
	putchar(a + '0');
	a++;
}

putchar('\n');

return (0);
}
