#include "holberton.h"
/**
 * _abs - main function
 *
 * Return: absolute valor
 *
 * @i: recives an integer
 */
int _abs(int i)
{
	if (i < 0)
	{
		return ((i * (-1)));
	}
	else if (i > 0)
	{
		return (i);
	}
	else
	{
		return (0);
	}

}
