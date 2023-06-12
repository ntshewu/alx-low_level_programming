#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX
 * @filename: text file to be read
 * @letters: nr of letters to be read
 * Return: if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(fd, buf, letters);
	z = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
