#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to char
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || !f)
		return;
	(f)(name);
}
