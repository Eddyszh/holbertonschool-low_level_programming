#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: recives a string
 * @s2: recives a string
 * Return: the comparision value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, n;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (s1[0] < s2[0])
		n = (*(s2 + 0) - *(s1 + 0)) * -1;
	else if (s1[0] > s2[0])
		n = *(s1 + 0) - *(s2 + 0);
	else
		n = 0;

	return (n);
}
