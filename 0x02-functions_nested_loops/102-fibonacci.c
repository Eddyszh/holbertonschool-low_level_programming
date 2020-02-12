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
	long int zero = 0;
	long int one = 1;
	long int succ = 0;

	for (i = 1; i <= 50; i++)
	{
		succ = zero + one;
		zero = one;
		one = succ;
		printf("%li", succ);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
