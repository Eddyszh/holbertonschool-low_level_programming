#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer
 * @y: integer to rise
 * Return: the value of x
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));

	n = x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2);
	return (n);
}
