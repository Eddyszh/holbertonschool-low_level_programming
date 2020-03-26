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
	for (i = 0; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		d_val += (b - '0') << 2;
	}
	return (d_val);
}
