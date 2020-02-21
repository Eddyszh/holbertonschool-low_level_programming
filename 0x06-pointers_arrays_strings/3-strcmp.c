#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: recives a string
 * @s2: recives a string
 * Return: the comparision value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, n;

	for (i = 0; s1[i] != '\0'; i++)
	{
		n = *(s1 + i) - *(s2 + i);
		if (n != 0)
 			return (n);
		else
			n = 0;
	}
	return (n);
}
