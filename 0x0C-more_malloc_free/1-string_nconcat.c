#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unsigned int bytes of s2
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0, j = 0, l, k;

	if (s1 == NULL)
		s1 = "";
	else
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		while (s2[j] != '\0')
			j++;
	}
	s3 = malloc(sizeof(char) * (i + n) + 1);
	if (s3 == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s3[k] = s1[k];
	if (n >= j)
	{
		for (l = 0; l < j; l++)
			s3[i + l] = s2[l];
	}
	for (l = 0; l < n; l++)
		s3[i + l] = s2[l];
	s3[i + l] = '\0';
	return (s3);
}
