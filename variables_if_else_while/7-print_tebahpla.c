#include <stdio.h>

/**
 * main - prints alphabet in lowercase, in reverse order.
 * Return: always 0 (success).
 */

int main(void)
{
char a;
a = 'z';

while (a >= 'a')
{
	putchar(a);
	a--;
}
putchar('\n');
return (0);
}
