#include "lists.h"

/**
 * add_node - entry point
 * Description: code that adds a new node at the beginning of a list
 *
 * @head: pointer to pointer
 * @str: pointer to char
 * Return: address of new address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *z;
	int len = 0;

	while (str[len])
		len++;

	z = malloc(sizeof(list_t));

	if (!z)
		return (NULL);

	z->len = len;
	z->str = strdup(str);
	z->next = (*head);
	(*head) = z;

	return (z);
}
