#include "lists.h"

/**
 * print_listint - entry point
 * Description: A function that prints all the elements of a listint list
 *
 * @h: the linked list to be printed
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		b++;
	}

	return (b);
}
