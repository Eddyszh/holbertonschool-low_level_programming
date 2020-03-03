#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: unsigned int size of array
 * @c: char who inits the array
 * Return: '\0' if size = 0. A pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		s = malloc(size * sizeof(char));
		if (s == '\0')
		{
			return ('\0');
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				s[i] = c;
			}
		}
		return (s);
	}
}