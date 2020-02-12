#include "holberton.h"
/**
 * print_times_table - main function
 *
 * @n: recives an integer
 */
void print_times_table(int n)
{
	int i, j, l;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
				l = i * j;
				if (!(n >= 15 || n <= 0))
				{
					if (j >= 1 && l <= 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(l + '0');
					}
					else if (l < 100 && l > 8)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((l / 10) + '0');
						_putchar((l % 10) + '0');
					}
					else if (l > 90)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((l / 100) + '0');
						_putchar(((l / 10) % 10) + '0');
						_putchar((l % 10) + '0');
					}
				}
		}
		_putchar('\n');
	}
}
