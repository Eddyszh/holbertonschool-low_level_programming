#include "holberton.h"
/**
 * print_last_digit - main function
 *
 * Return: the last digit
 *
 * @i: recives the number to analyze
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i=((i % 10) * -1);
	}
	else if (i > 0)
	{
		i=i % 10;
	}
	_putchar(i + '0');
	return (i);
}
