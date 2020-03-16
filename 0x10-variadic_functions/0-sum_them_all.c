#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: unsigned int
 * Return: 0 if n is 0 otherwise an add
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(vl, n);
	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);
	va_end(vl);
	return (sum);
}
