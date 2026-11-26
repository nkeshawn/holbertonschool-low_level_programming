#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function
 *
 * @s: operator
 *
 * Return: a pointer to a function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		/**
		 * important to check if second character is null terminator
		 * else, ++ would also pass
		 */
		if (s[0] == ops[i].op[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
