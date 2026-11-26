#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that add positive numbers
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
	int i;
	int j;

	result = 0;
	i = 1;
	j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		j++;
		}
		result += atoi(argv[i]);
		i++;
		j = 0;
	}
	printf("%d\n", result);

	return (0);

}
