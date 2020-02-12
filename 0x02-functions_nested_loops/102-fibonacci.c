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
	long int one = 1;
	long int two = 2;
	long int succ = 2;

	printf("1, ");

	for(i = 1; i <= 50; i++)
	{
		printf("%ld", succ);
		succ = one + two;
		one = two;
		two = succ;
		if(i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
