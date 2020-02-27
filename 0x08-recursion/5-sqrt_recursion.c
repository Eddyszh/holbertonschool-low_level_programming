#include "holberton.h"
int _sqrt(int i, int n);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt(0, n));
}

/**
 * _sqrt - search the square root of a number
 * @i: integer
 * @n: integer
 * Return: the square root of th n integer
 */
int _sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		return (_sqrt(i + 1, n));

}
