#include "holberton.h"
/**
 * print_line - prints a line n long
 *
 * @n:recives an integer how long the line is
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar(95);
		else
			_putchar('\n');
	}
	_putchar('\n');
}
