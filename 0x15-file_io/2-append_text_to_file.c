#include "main.h"
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: 1 (on success), -1 (on failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t nwrite;

	if (!filename)
		return (-1);

	if (!text_content)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	nwrite = write(fd, text_content, i);

	close(fd);

	if (nwrite == -1 || nwrite != i)
		return (-1);

	return (1);
}
