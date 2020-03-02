#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: number of argument commands
 * @argv: lentgh of argc
 * Return: 1 if number is not 1 otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, m, r = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && m >= 0; i++)
	{
		while (m >= c[i])
		{
			r++;
			m -= c[i];
		}
	}
	printf("%d\n", r);
	return (0);
}
