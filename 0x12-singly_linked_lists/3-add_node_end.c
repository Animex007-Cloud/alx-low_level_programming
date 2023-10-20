#include "lists.h"

/**
 * _strlen - entry point
 * @str: len of string
 * Description: calculate  string
 *
 * Return: len of string
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * add_node_end - entry point
 * Description: adding of nodes
 * @head: the linked list
 * @str: string
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp1, *new1;
	char *strdupz;

	if (str == NULL)
		return (NULL);

	strdupz = strdup(str);
	if (strdupz == NULL)
		return (NULL);

	new1 = malloc(sizeof(list_t));
	if (new1 == NULL)
		return (NULL);

	new1->str = strdupz;
	new1->len = _strlen(str);
	new1->next = NULL;

	if (*head == NULL)
		*head = new1;
	else
	{
		tmp1 = *head;
		
		while (tmp1->next != NULL)
			tmp1 = tmp1->next;
		tmp1->next = new1;
	}
	return (new1);
} 
