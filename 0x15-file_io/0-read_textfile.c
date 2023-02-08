#include "main.h"
#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: ...
 * @letters: size in bytes to be read and written
 *
 * Return: The read and written bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t nread, nwrite;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	nread = read(fd, buf, letters);

	if (nread == -1)
	{
		free(buf);
		return (0);
	}

	nwrite = write(STDOUT_FILENO, buf, nread);

	if (nwrite == -1 || nwrite != nread)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (nread);
}
