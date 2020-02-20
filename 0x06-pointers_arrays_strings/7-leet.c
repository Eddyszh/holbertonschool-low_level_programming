#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @c: recives an integer
 * Return: the replaced char
 */
char *leet(char *c)
{
	int i, j;
	char l[] = "aeotl";
	char u[] = "AEOTL";
	int n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; u[j] != '\0'; j++)
		{
			if (c[i] == l[j] || c[i] == u[j])
				c[i] = n[j];
		}
	}
	return (c);
}
