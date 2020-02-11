#include "holberton.h"
/**
 * times_table - main function
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j >= 1 && (i * j) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if ((i * j) < 10)
			{
				_putchar((i * j) + '0');
			}
			else
			{
				if((i * j) > 8)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
