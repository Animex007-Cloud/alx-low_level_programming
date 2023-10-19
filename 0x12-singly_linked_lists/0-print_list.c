#include "lists.h"

/**
 * print_list - entry point
 * Description: A function that prints all elements of a list
 *
 * @h: pointer to list
 * Return: the number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t sum = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h-str);
		h = h->next;
		sum++;
	}

	return (sum);
}
