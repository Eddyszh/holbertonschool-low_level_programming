#include "lists.h"
void first_function(void) __attribute__ ((constructor));
/**
 * first_function - prints a message before the main function is executed
 */
void first_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
