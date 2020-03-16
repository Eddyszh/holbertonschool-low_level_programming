#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: pointer to char
 * @n: unsigned int
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list cl;
	unsigned int i;
	char *s;

	va_start(cl, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(cl, char*);
		if (!s)
			s = "(nil)";
		if (!separator || (separator && i == 0))
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(cl);
}
