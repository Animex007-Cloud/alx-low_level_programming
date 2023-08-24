#include "lists.h"

/**
 * add_node_end - entry point
 *
 * Description: add a new node at the end of a list
 * @head: pointer to pointers
 * @str: pointer to string
 * Return: address to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *zend, c_n;
	size_t z;

	zend = malloc(sizeof(list_t));

	if (zend == NULL)
		return (NULL);

	zend->str = strdup(str);

	for (z = 0; str[z]; z++)
		;

	zend->len = z;
	zend->next = NULL;
	c_n = *head;

	if (c_n == NULL)
	{
		*head = zend;
	}
	else
	{
		while (c_n->next != NULL)
			c_n = c_n->next;
		c_n->next = n;
	}
	return (*head);
}
