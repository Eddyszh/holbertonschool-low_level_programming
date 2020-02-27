#include "holberton.h"
int _prime_number(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number(n, n - 1));
}

/**
 * _prime_number - search for the prime number
 * @n: integer
 * @i: integer
 * Return: the prime number
 */
int _prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (_prime_number(n, i - 1));
}
