#include "holberton.h"
/**
 * print_triangle - draws a triangle
 *
 * @size: the length of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (size > 0)
			{
				if (j > i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			else
			{
				_putchar('\n');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
