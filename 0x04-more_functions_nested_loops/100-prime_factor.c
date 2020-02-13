#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	long int i = 612852475143, j;

	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			i = i / j;
	}
	printf("%li\n", i);
	return (0);
}
