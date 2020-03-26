#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to char
 * Return: the converted number, or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, mod, b_val, d_val = 0, base = 1;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
	}
	b_val = atoi(b);
	while (b_val > 0)
	{
		mod = b_val % 10;
		d_val += mod * base;
		b_val /= 10;
		base *= 2;
	}
	return (d_val);
}
