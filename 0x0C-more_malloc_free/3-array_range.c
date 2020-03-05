#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min int of an array
 * @max: max int of an array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
    int *a, i, j;

    if (min > max)
        return (NULL);
    a = malloc(sizeof(int) * (max - min) + 1);
    if (a == NULL)
        return (NULL);
    for (i = 0, j = min; i <= max; i++, j++)
        a[i] = j;
    return (a);
}