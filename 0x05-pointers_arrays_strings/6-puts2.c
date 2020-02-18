#include "holberton.h"
/**
 * puts2 - prints and odd secuencial number
 * @str: recives the char source
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
