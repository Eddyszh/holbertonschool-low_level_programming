#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to char
 * Return: lenght of a string
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (!(!*s))
		s++;
	else
		return (0);
	c = 1 +  _strlen_recursion(s);
	return (c);
}
