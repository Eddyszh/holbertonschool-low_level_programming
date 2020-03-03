#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to char
 * Return: NULL if str = NULL. A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, l = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (;str[l] != '\0'; l++)
	{
	}
	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
