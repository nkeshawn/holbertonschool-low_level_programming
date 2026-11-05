#include<stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 *        without using printf.
 * Return: always 0 (success).
 */

int main(void)
{
int a;
char b;

a = 48;
b = 'a';

while (a < 58)
{
	putchar(a);
	a++;
}
while (b <= 'f')
{
	putchar(b);
	b++;
}
putchar('\n');

return (0);
}
