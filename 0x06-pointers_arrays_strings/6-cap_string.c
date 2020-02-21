#include "holberton.h"
/**
 * cap_string - capitalizes a word
 * @s: recives a char
 * Return: the letter capitalized
 */
char *cap_string(char *s)
{
	int i, j;
	char c[] = {' ', '\t', '\n', ',', ';', '.', '!',
		    '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				for (j = 0; c[j] != '\0'; j++)
				{
					if (s[i - 1] == c[j])
					{
						s[i] -= 32;
					}
				}
			}
		}
	}
	return (s);
}
