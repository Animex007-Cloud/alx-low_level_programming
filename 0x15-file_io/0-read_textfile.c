#include "main.h"

/**
 * read_textfile - entry point
 * Description: A function that reads a text file and prints it
 * to the POSIX standard output
 *
 * @filename: The name of file to be accessed and to be read
 * @letters: The numbers of letters to be read and printed
 *
 * Return: on fail 0, if file name is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int j;
	char *itrate = NULL;
	ssize_t my_readings;
	ssize_t my_write;

	if (!(filename && letters))
		return (0);
	j = open(filename, O_RDONLY);
	if (j == -1)
		return (0);

	itrate = malloc(sizeof(char) * letters);
	if (!itrate)
		return (0);

	my_readings = read(j, itrate, letters);
	close(j);

	if (my_readings < 0)
	{
		free(itrate);
		return (0);
	}
	if (!my_readings)
		my_readings = letters;

	my_write = write(STDOUT_FILENO, itrate, my_readings);
	free(itrate);

	if (my_write < 0)
		return (0);

	return (my_write);
}
