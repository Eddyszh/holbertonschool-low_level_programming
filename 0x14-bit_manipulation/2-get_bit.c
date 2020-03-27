#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int value
 * @index: unsigned int value
 * Return:  the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 4294967296, c = 31, j;

	if (n == 0)
		return (-1);
	while (i > 0)
	{
		if ((n & i) == 0 && (c - index) == 0)
			j = 0;
		else
			j = 1;
		i = i >> 1;
		c--;
	}
	return (j);
}
