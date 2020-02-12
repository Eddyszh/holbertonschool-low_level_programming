#include "holberton.h"
#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int num3;
	int num5;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		num3 = num3 + (i % 3);
		num5 = num5 + (i % 5);
	}
	sum = num3 + num5;
	printf("%d\n", sum);
	return (0);
}
