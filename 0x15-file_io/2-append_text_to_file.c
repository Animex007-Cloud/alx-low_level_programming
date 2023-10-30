#include "main.h"

/**
 * _strlen - entry point
 * Description: A function that calculate the length of string
 *
 * @str: string to be checked
 * Return: length
 */

ssize_t _strlen(const char *str)
{
	ssize_t length = 0;

	if (!str)
		return (-1);

	while (*str++)
		length++;

	while (*str++)
		length++;

	return(length);
}

/**
 * append_text_to_file - entry point
 * Description: A function that Appends a text at the
 * end of the file
 *
 * @filename: name of file
 * @text_content: the NULL terminator string to be added at the end
 * of file
 * Return: -1 in fail, 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int j;
	ssize_t my_write = 0;

	if (!filename)
		return (-1);

	j = open(filename, O_WRONLY | O_APPEND);

	if (j < 0)
		return (-1);

	if (text_content)
		my_write = write(j, text_content, _strlen(text_content));
	close(j);

	if (my_write < 0)
		return (-1);
	return (1);
}
