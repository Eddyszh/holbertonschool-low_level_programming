#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int value
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 4294967296;

	while (i > 0)
	{
		if ((n & i) == 0)
			_putchar(48);
		else
			_putchar(49);
		i = i >> 1;
	}
}
