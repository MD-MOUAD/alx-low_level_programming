#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: the file name.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_bytes, n;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);
	r_bytes = read(fd, buffer, letters);
	close(fd);
	if (r_bytes < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[r_bytes] = '\0';
	n = write(STDOUT_FILENO, buffer, r_bytes);
	free(buffer);
	if (n < 0)
		return (0);
	return (n);
}
