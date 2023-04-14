#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read textfile to stdout
 * @filename:file is read
 * @letters:number of letters to be read
 * Return : actual number of letters read and print or 0 is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t m;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(fd, buf, letters);
	m = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(fd);
	return (m);

}

