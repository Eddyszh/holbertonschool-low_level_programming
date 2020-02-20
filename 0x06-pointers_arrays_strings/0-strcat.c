#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: recives a string destination
 * @src: recives a string source
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j, n = 0;

	while (src[i])
		i++;
	while (dest[n])
		n++;
	for (j = 0; j < n + 1; j++)
		dest[n + j] = src[j];

	return (dest);
}
