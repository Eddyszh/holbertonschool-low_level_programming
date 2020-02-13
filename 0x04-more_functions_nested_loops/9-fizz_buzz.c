#include "holberton.h"
#include <stdio.h>
/**
 * main - main functions
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) && (i % 5))
		{
			printf("%d ", i);
		}
		else
		{
			if ((i % 15) == 0)
				printf("FizzBuzz ");
			if ((i % 3) == 0)
				printf("Fizz ");
			if ((i % 5) == 0)
				printf("Buzz ");
		}
	}
	printf("\n");
	return (0);
}
