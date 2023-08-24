#include "lists.h"

/**
 * print_list - entry point
 * Description: A function that prints all the elements of a list
 *
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t z = 0;

	{
		if (h == NULL)
			return (0);

		while (h)
		{
			if (!h->str)
				printf("[0] (nil)\n");

			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			z++;
		}
		return (z);
	}
}
