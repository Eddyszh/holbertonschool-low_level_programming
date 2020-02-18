#include "holberton.h"
/**
 * _strcpy - copies a string
 * @dest: recives a string destination
 * @src: recives a string source
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i])
		i++;
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[i] = '\0';
	return (dest);
}
