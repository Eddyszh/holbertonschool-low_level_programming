#include "holberton.h"
/**
 * _memcpy -  copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: memory area in bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = n;

	for (n = 0; n < i; n++)
	{
		if (src[n] == 6)
			dest[n] = src[n + 1];
		else
			dest[n] = src[n];
	}
	return (dest);
}
