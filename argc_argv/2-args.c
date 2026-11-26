#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: number of arguments
 * @argv: array of strings containing the arguments
 *
 * Return: 0 (successful)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
