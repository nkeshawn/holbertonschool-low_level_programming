#include <stdio.h>

/**
 * main - prints alphabet in lowercase, except e and q.
 * Return: always 0 (success).
 */

int main(void)
{
char a;
a = 'a';

while (a <= 'z')
{
	if (a != 'e' && a != 'q')
		putchar(a);
	a++;
}
putchar('\n');
return (0);
}
