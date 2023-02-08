#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: 1 (on success), -1 (on failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n = 0;
	ssize_t nwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	while (text_content[n])
		++n;

	nwrite = write(fd, text_content, n);

		if (nwrite == -1 || nwrite != n)
			return (-1);

	close(fd);
	return (1);
}
