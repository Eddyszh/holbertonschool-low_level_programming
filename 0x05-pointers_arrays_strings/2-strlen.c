#include "holberton.h"
/**
 * _strlen - counts the lenght of an array
 * @s: recives a char
 * Return: the length of an array
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
