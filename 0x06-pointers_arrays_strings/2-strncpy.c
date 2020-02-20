#include "holberton.h"
/**
 * _strncpy - copies an string
 * @dest: destination string
 * @src: source string
 * @n: recives an integer
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
