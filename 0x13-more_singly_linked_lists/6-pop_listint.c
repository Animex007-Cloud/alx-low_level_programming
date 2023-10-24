#include "lists.h"

/**
 * pop_listint - entry point
 * Description: A function that deletes the head node and
 * returns the head node data
 *
 * @head: begining of list
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int b;
	listint_t *print, *tp;

	if (head == NULL)
		return (0);
	tp = print = *head;

	if (*head)
	{
		b = print->n;
		*head = print->next;
		free(tp);
	}
	else
		b = 0;
	return (b);
}
