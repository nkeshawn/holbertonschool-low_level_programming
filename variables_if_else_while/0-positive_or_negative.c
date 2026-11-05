#include <stdio.h>

/**
 * main- prints whether the variable n is positive or negative.
 * Return: always 0 (success).
 */

int main(void)
{
int n;
n = 0;

if (n > 0)
{
	printf("%lu is positive, n");
}

else if (n == 0)
{
	printf("%lu is zero, n");
}

else
	printf("%lu is negative, n");

return (0);
}
