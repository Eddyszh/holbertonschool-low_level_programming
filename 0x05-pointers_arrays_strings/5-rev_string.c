#include "holberton.h"
/**
 * rev_string - reverse the array
 * @s: recive an pointer to char
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char t;

	while (s[i] != '\0')
	{
		i++;
	}

	while (j < i - 1)
	{
		t = s[i - 1];
		s[i - 1] = s[j];
		s[j] = t;
		j++;
		i--;
	}
}
