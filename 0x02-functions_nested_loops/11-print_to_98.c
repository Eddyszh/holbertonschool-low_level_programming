#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - main function
 *
 * @n: recives an integer
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}

	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
