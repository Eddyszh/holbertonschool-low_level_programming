#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: charto compare
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == '\0')
		return (&s[i]);
	return ('\0');
}
