#include "holberton.h"
/**
 * _puts - prints a string
 * @str: recives a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
