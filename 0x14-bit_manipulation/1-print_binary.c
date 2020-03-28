#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int value
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n, count = 1, mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((m >> 1) != 0)
	{
		m >>= 1;
		count++;
	}
	mask <<= count - 1;
	while (mask != 0)
	{
		_putchar(((n & mask) >> (count - 1)) + '0');
		mask >>= 1;
		count--;
	}
}
