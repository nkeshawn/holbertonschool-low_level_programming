#include "3-calc.h"

/**
 * main - function that performs simple operations
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:
 * if successful, return 0
 * if it fails, return exit status
 */

int main(int argc, char *argv[])
{
	int result;
	int (*function)(int, int);

	result = 0;
	function = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = function(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);

}
