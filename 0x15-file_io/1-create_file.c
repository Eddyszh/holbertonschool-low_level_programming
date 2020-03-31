#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of the file created
 * @text_content: content of the te created file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd;
	char *end = text_content;

	while (*end++)
	{};
	i = end - text_content - 1;
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		write(fd, text_content, 0);
	else
		write(fd, text_content, i);
	text_content = '\0';
	close(fd);
	return (1);
}
