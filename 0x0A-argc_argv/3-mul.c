#include <stdio.h>
int atoi(char *str);
/**
 * main - multiplies two numbers
 * @argc: number of the arguments commands
 * @argv: length of argc
 * Return: 0 if there are two arguments 1 otherwise
 */
int main(int argc, char *argv[])
{
	int r, arg1, arg2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(*(argv + 1));
	arg2 = atoi(*(argv + 2));
	r = arg1 * arg2;
	printf("%d\n", r);

	return (0);
}
