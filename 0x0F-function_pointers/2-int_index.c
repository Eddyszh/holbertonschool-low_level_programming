#include "function_pointers.h"
/**
 * array_iterator - searches for an integer
 * @array: pointer to int
 * @size: size of array
 * @cmp: pointer to function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]) != 0)
		{
			return (i);
			break;
		}
	}
	return (-1);
}
