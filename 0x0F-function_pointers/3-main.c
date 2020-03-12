#include "3-calc.h"
/**
 * main - calculator
 * @ac: number of argument commands
 * @av: length of ac
 * Return: 0
 */
int main(int ac, char *av[])
{
	int num1, num2, result;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	result = get_op_func(av[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
