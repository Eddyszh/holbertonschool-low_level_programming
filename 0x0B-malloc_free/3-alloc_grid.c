#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: size of grid
 * @height: size of grid
 * Return: NULL on failure. Pointer to a newly allocated space
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **g;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(g[j]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}
	return (g);
}
