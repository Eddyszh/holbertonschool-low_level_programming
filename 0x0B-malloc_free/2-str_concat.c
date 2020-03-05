#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: NULL on failure. Pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, k, l;

	if (s1 == NULL)
		s1 = "";
	else
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		while (s2[j] != '\0')
			j++;
	}
	s = malloc((i + j) + 1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (l = 0; l < j; l++)
		s[i + l] = s2[l];
	return (s);
}
