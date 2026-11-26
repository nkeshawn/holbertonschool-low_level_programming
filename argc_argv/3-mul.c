#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of string containing the arguments
 *
 * Return:
 * if successful, 0
 * if it fails, 1
 */


int main(int argc, char *argv[])
{
	int result;

	result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);

}
