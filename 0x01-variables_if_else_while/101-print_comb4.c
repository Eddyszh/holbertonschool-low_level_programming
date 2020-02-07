#include <stdio.h>
/**
 * main - Combination 4
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > j && j > i && k > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				if (!(j == 56 && k == 57 && i == 55))
				{
					putchar(44);
					putchar(32);
				}
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
