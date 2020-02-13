#include "holberton.h"
/**
 * _isupper - main function
 *
 * Return: if is uppercase 1 else 0
 *
 *@c: recives an integer
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
