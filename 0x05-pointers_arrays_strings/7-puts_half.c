#include "holberton.h"
/**
 * puts_half - prints the half of a string
 * @str: recives the char source
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;

		if (i % 2 != 0)
		{
			j = ((i + 1) / 2);
			while (j <= i)
			{
				_putchar(str[j]);
				j++;
			}
		}
		else
		{
			j = i / 2;
			while (j <= i)
			{
				_putchar(str[j]);
				j++;
			}
		}

	_putchar('\n');
}
