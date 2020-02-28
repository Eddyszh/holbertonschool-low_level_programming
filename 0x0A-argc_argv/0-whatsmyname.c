#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of command lines arguments
 * @argv: length of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
