#include "holberton.h"
/**
 * _isalpha - main function
 *
 * Return: 1 if c is a letter else 0
 *
 * @c: recives the character value
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
