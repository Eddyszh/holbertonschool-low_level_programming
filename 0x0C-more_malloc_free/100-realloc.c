#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to allocate
 * @old_size: unsigned old size of memory
 * @new_size: unsigned new size of memory
 * Return: new mamory allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n, *o;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	n = malloc(new_size);
	o = ptr;
	if (n == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		n[i] = o[i];
	free(ptr);
	return (n);
}
