#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to int
 * @size: integer to size
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[i * (size + 1)];

	for (j = 0; j < size; j++)
		sum2 += a[(j * size) + (--i)];
	printf("%d, %d\n", sum1, sum2);
}
