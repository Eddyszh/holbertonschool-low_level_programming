#include "holberton.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @c: recives a char
 * Return: uppercase letters
 */
char *string_toupper(char *c)
{
	int i = 0, j = 0;
	char *u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *l = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (l[j] == c[i])
				c[i] = u[j];
		}
	}
	return (c);
}
