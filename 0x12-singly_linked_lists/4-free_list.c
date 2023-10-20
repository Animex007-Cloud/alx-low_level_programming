#include "lists.h"

/**
 * free_list - entry point
 *
 * Description: A function that frees list
 * @head: linked list to be freed
 * Return: 0
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
