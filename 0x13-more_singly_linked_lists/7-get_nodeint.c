#include "lists.h"

/**
 * get_nodeint_at_index - entry point
 * Description: a function that returns the nth node
 *
 * @head: begining of list
 * @index: the index of node
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;

	while (b < index)
	{
		if (head->next == NULL)
			return(NULL);
		head = head->next;
		b++;
	}
	return (head);
}
