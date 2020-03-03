#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to char
 * Return: NULL if str = NULL. A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = malloc(*str * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < *str; i++)
			{
				s[i] = str[i];
			}
		}
		return (s);
	}
}