#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stddef.h>

/**
 * create_file - creates a file and writes text to it
 * @filename: name of the file to crate
 * @text-content: a NULL terminated string to write to the file
 * Return: 1 on sucess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_len = 0, text_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;

		written_len = write(fd, text_content, text_len);
		if (written_len == -1 || written_len != text_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
