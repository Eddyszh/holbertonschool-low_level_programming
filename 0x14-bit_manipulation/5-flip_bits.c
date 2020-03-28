#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long int value
 * @m: unsigned long int value
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n ^= m;
	while (n)
	{
		n &= (n - 1);
		count++;
	}
	return (count);
}
