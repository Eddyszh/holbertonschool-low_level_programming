#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: recives a string
 * @src: recives a string
 * @n: recives an integer
 * Return: pointer to a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	return (dest);
}
