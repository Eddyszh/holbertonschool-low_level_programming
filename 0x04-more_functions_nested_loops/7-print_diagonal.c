#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line
 *
 * @n: the amount lines will printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i > 0 && j <= i - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
