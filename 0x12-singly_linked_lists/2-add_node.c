#include "lists.h"

/**
 * _strlen - entry point
 *
 * Description: a function that calculates the
 * length of a string
 * @str: length holder
 * Return: total length of a string
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * all_node - entry point
 * Description: function that adds node to list
 * @head: list of current position of node
 * @str: string
 * Return: 0 on success
 */

list_t *add_node(list_t **head, const char *str)
{
	int b, len;
	char *filled;
	list_t *nodes_new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	nodes_new = *head;
	filled = malloc((len + 1) * sizeof(char));

	if (filled == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		filled[b] = str[b];
	nodes_new = malloc(sizeof(list_t));
	if (nodes_new == NULL)
	{
		free(filled);
		return (NULL);
	}
	nodes_new->str = filled;
	nodes_new->len = len;
	nodes_new->next = *head;
	*head = nodes_new;
	return (nodes_new);
}
