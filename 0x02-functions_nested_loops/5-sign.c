#include "holberton.h"
/**
 * print_sign - main function
 *
 * Return: a value if n is greater, less or equal to 0
 *
 * @n: recives the number argument
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
