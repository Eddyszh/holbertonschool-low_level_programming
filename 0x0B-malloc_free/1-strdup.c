#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to char
 * Return: '\0' if str = '\0'. A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == '\0')
	{
		return ('\0');
	}
	else
	{
		s = malloc(*str + 1 * sizeof(char));
		if (s == '\0')
		{
			return ('\0');
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