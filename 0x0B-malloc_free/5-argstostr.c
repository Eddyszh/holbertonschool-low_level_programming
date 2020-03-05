#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: size of arguments
 * @av: length of ac
 * Return: NULL on failure. Pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *s;

	if (ac == 0 || av == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}
	s = malloc((ac + k + 1) * sizeof(char));
	if (s == 0)
		return (0);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	s[k] = 0;
	return (s);
}
