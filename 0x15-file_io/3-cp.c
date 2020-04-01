#include "holberton.h"
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed
 * @av: list of arguments passed
 * Return: 0
 */
int main(int ac, char *av[])
{
	char buf[1024];
	int file_from, file_to, r = 1024, w;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
		exit(99);
	while (r == 1024)
	{
		r = read(file_from, buf, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			exit(98);
		w = write(file_to, buf, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
			exit(99);
	}
	w = close(file_from);
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	w = close(file_to);
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
