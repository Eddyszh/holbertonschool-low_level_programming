#include "holberton.h"
/**
 * print_times_table - main function
 *
 * @n: recives an integer
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j ++)
		{
			for (k = 0; k < 1; k++)
			{
			if (!(n > 15 || n < 0))
			{
				if (j >= 1 && (i * j) <= 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				}
				if ((i * j) < 10)
				{
				_putchar((i * j) + '0');
				}
				else if ((i * j) < 100)
				{
				if ((i * j) > 8)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				}
				else
				{
					if ((i * j) > 90)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar(((i *j) / 100) + '0');
					_putchar((((i *j) / 10) %10) + '0');
					_putchar(((i * j) % 10) + '0');
				}

			}
			}
		}
		_putchar('\n');
	}
}
