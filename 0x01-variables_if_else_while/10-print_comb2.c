#include <stdio.h>
/**
 * main - Nine
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (j <= 57)
			{
				if (!(i == 57 && j == 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
