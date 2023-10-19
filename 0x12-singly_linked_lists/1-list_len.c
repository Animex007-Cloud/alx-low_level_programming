#include "list.h"

/**
 * list_len - entry point
 *
 * Description: A finction that prints the
 * length of list link
 * @h: the list linked
 *
 * Return: num of element.
 */

size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
