#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to char
 * @accept: pointer to char
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				c++;
		}
	}
	return (c);
}
