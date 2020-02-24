#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: char to pointer
 * @b: char
 * @n: unsigned int
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = n;

	for (n = 0; n < i; n++)
		s[n] = b;
	return (s);
}
