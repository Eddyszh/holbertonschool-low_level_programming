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

	while (src[i] != '\0')
		i++;
	for (j = 0; j < i && src[j] != '\0'; j++)
		dest[j] = src[j];
	for( ; j < i; j++)
		dest[j] = '\0';
	return (dest);
}
