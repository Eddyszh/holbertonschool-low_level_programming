#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * @s: pointer to char to select the symbol operation
 * Return: type of operation
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
	return (NULL);
}
