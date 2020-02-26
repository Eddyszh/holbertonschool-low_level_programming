#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to char
 */
void _print_rev_recursion(char *s)
{
	if (*s)
		s++;
	else
		return;
	_print_rev_recursion(s--);
	_putchar(*s);
}
