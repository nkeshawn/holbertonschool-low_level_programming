#include <stdio.h>

/**
 * main - print the numbers from 1 to 100
 * for multiples of 3, print Fizz
 * for multiples of 5, print Buzz
 * for multiples of 3 and 5, print FizzBuzz
 *
 * Return: always 0 (success).
 */

int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);

		if (a < 100)
		putchar(' ');
	a++;
	}
	putchar('\n');
	return (0);
}
