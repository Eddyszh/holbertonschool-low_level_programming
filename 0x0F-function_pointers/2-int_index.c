#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to int
 * @size: size of array
 * @cmp: pointer to function
 * Return: index number of match int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((cmp)([i]))
			return (i);
	}
	return (-1);
}
