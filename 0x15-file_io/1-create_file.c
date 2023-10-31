#include "main.h"

/**
 * _strlen - entry point
 * Description: A function that calculates the length of the
 * requried string
 * @str: string to be checked
 *
 * Return: length
 */

ssize_t _strlen(const char *str)
{
	ssize_t length = 0;

	if (!str)
		return (-1);

	while (*str++)
		length++;

	return (length);
}

/**
 * create_file - entry point
 * Description: A function that create file with permission read & write only
 *
 * @filename: name of file to be created
 * @text_content: NULL terminateing string
 *
 * Return: -1 on error, 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int j;
	ssize_t my_write = 0;

	if (!filename)
		return (-1);

	j = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (j < 0)
		return (-1);

	if (text_content)
		my_write = write(j, text_content, _strlen(text_content));
	close(j);

	if (my_write < 0)
		return (-1);
	return (1);
}
