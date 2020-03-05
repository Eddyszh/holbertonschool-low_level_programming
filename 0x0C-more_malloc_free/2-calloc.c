#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: content of an array
 * @size: size in bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *b, i;

	b = malloc(size * nmemb);
	if (b == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		b[i] = 0;
		return (b);
	}
	return (b);
}
