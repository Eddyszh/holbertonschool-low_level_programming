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
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == s[i])
			{
				for (k = 0; l[k] != '\0'; k++)
				{
					if (s[i + 1] == l[k])
					{
						s[i + 1] = u[k];
					}
				}
			}
		}
	}
	return (s);
}
