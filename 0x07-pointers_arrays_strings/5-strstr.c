#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if(!needle[j])
			return (&(*(haystack + i)));
	}
	return ('\0');
}
