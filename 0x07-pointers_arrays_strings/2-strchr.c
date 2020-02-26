#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: charto compare
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{

	while (*s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
			return ('\0');
}
