#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints the values of an array
 * @a: recives a pointer to integer
 * @n: recives an integer
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
