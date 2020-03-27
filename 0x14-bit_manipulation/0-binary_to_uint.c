#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to char
 * Return: the converted number, or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, d_val = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		d_val = (d_val * 2) + (b[i] - '0');
	}
	return (d_val);
}
