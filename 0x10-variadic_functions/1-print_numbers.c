#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to char
 * @n: unsigned int
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator == NULL)
			printf(" ");
		else if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
