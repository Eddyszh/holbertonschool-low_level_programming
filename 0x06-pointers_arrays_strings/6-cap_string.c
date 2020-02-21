#include "holberton.h"
/**
 * cap_string - capitalizes a word
 * @s: recives a char
 * Return: the letter capitalized
 */
char *cap_string(char *s)
{
	int i, j, k;
	char c[] = {' ', '\t', '\n', ',', ';', '.', '!',
		    '?', '"', '(', ')', '{', '}'};
	char u[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[0] == l[j] || s[0] == u[j])
			{
				s[0] = u[j];
			}
			else if (s[i] == l[j])
			{
				for (k = 0; c[k] != '\0'; k++)
				{
					if (s[i - 1] == c[k])
					{
						s[i] = u[j];
					}
				}
			}
		}
	}
	return (s);
}
