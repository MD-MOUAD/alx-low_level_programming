#include "main.h"
void print_error(char *msg, char *opt, int status);
/**
 * main - Copies the content of a file-from to file_to file
 * @argc: Numbers of arguments
 * @argv: Arguments
 *
 * Return: Return 0
 **/
int main(int argc, char **argv)
{
	int fd_to, fd_from, wr_bytes, r_bytes;
	char *buffer[1024];

	if (argc != 3)
		print_error("Usage: cp file_from file_to", "", 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file", argv[1], 98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error("Error: Can't write to", argv[2], 99);
	r_bytes = read(fd_from, buffer, 1024);
	while (r_bytes > 0)
	{
		wr_bytes = write(fd_to, buffer, r_bytes);
		if (wr_bytes == -1)
			print_error("Error: Can't write to", argv[2], 99);
		r_bytes = read(fd_from, buffer, 1024);
	}
	if (r_bytes == -1)
		print_error("Error: Can't read from file", argv[1], 98);
	if (close(fd_from == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	if (close(fd_to == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
	return (0);
}
/**
 * print_error - Print the error and close the file descriptor
 * @msg: Error message to show
 * @opt: Optional arguments
 * @status: Exit status code
 **/
void print_error(char *msg, char *opt, int status)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, opt);
	exit(status);
}
