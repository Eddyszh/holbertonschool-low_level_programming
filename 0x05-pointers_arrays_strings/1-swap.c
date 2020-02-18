#include "holberton.h"
/**
 * swap_int - swaps the value of two integers
 * @a: recives an integer
 * @b: recives an integer
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
