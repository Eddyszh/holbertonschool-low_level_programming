#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_strings - prints strings, followed by a new line
 * @format: formats that will receive to print
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char c;
	int i, index = 0;
	float f;
	char *s;

	va_start(list, format);
	while (format[index])
	{
		while (format && format[index])
		{
			switch (format[index++])
			{
			case 'c':
				c = va_arg(list, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(list, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(list, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(list, char*);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default :
				continue;
			}
			if (format[index])
				printf(", ");
		}
	}
	printf("\n");
	va_end(list);
}
