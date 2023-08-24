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
	list_t *zend;
	int len = 0;

	while (str[len])
		len++;

	zend = malloc(sizeof(list_t));

	if (!zend)
		return (NULL);

	zend->len = len;
	zend->str = strdup(str);
	zend->next = (*head);
	(*head) = zend;

	return (zend);
}
