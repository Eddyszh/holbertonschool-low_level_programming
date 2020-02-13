#include "holberton.h"
/**
 * _isdigit - main function
 *
 * Return: if is a digit 1 else 0
 *
 * @c: recives an integer
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
