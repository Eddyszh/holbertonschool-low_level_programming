#include "holberton.h"
/**
 * reverse_array - reverses the content of an array
 * @a: an integer
 * @n: an integer
 */
void reverse_array(int *a, int n)
{
	int j = 0, t = 0;

	while (j < n - 1)
	{
		t = a[n - 1];
		a[n - 1] = a[j];
		a[j] = t;
		n--;
		j++;
	}
}
