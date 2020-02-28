#include <stdio.h>
int atoi(char *str);
/**
 * main - adds positive numbers
 * @argc: number of arguments commands
 * @argv: length of argc
 * Return: 0 if there are numbers 1 otherwise
 */
int main(int argc, char *argv[])
{
	int r, i;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			r += atoi(argv[i]);
		}
	}
	if (argc == 0)
	{
		return (0);
	}
	printf("%d\n", r);
	return (0);
}
