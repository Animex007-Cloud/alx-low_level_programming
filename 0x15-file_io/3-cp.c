#include "main.h"

#define BUFFSIZE 1024

/**
 * close_my_file - entry point
 * Description: A function that close the file descriptor
 *
 * @fd: file to be closed
 * Return: 1 if error, 0 on success
 */

int close_my_file(int fd)
{
	if (!close(fd))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);
}

/**
 * read_my_file - entry point
 * Description: A file that read a file and print the
 * error of message as given
 *
 * @fd: check/read descriptor
 * @filename: pointer to file
 * @itrate: send write to from buffer
 * @sum: sum up and count number of byte
 * Return: num of byte read
 */

ssize_t read_my_file(const char *filename, int fd, char *itrate, size_t sum)
{
	ssize_t my_bytes = read(fd, itrate, sum);

	if (my_bytes > -1)
		return (my_bytes);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (-1);
}

/**
 * write_my_file - entry point
 * Description: A function that writes the file and print error message
 * to failure
 *
 * @fd: descriptor of file
 * @filename: file to print from
 * @itrate: bytes to check
 * @sum: sum and write num of bytes
 * Return: -1 on fail and num of bytes on success
 */

ssize_t write_file(const char *filename, int fd,
		const char *itrate, size_t sum)
{
	ssize_t write_bytes = write(fd, itrate, sum);

	if (write_bytes > -1)
		return (write_bytes);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (-1);
}

/**
 * main - entry point
 * Description: A function that copies file
 * @argc: firsr arg
 * @argv: character
 *
 * Return: 0
 */

int main(int argc, const char *argv[])
{
	int input, output;
	char itrate[BUFFSIZE];
	ssize_t my_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	input = open(argv[1], O_RDONLY);
	if (input < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	output = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (output < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_my_file(input);
		exit(99);
	}
	while ((my_bytes = read_my_file(argv[1], input, itrate, BUFFSIZE)))
	{
		if (my_bytes < 0)
		{
			close_my_file(input);
			close_my_file(output);
			exit(98);
		}
		if (write_file(argv[2], output, itrate, my_bytes) < 0)
		{
			close_my_file(input);
			close_my_file(output);
			exit(99);
		}
	}
	if ((close_my_file(input) | close_my_file(output)) < 0)
		exit(100);
	return (0);
}
