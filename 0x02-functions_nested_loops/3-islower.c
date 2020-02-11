#include "holberton.h"
/**
 * _islower - main function
 *
 * Return: 1 if c is lowercase else 0
 *
 * @c: recives the char argument
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
