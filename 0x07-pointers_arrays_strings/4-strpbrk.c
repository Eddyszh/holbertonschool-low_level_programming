#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	if (s[i] == '\0')
		return (&s[i]);
	return ('\0');
}
