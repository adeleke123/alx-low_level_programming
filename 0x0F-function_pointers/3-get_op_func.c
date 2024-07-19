#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - A function that selects the correct
 * function to perform the operation asked by the user.
 * @s: The operator to be used
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter
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

	while (ops[i].op != NULL && ops[i].f != NULL)
	{
		if (ops[i].op[0] == s[0] && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
