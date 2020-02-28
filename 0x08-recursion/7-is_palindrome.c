#include "holberton.h"
int string_length(char *s);
int _evaluate_char(char *s, int i, int l);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to char
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (0);
	return (_evaluate_char(s, 0, string_length(s)));
}

/**
 * string_length - counts the length of a string
 * @s: pointer to char
 * Return: length of the string
 */
int string_length(char *s)
{
	if (!*s)
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * _evaluate_char - evaluates is the char of two strings are the same
 * @s: pointer to char
 * @i: integer index
 * @l: integer length
 * Return: 1 if the char are the same 0 otherwise
 */
int _evaluate_char(char *s, int i, int l)
{
	if (s[i] != s[l - 1])
		return (0);
	if (i >= l)
		return (1);
	return (_evaluate_char(s, i + 1, l - 1));
}
