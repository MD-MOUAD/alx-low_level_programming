#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the file name
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success or -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		wr = write(fd, text_content, i);
		if (wr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
