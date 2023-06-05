#include "lists.h"

/**
 * listint_len - returns the # of elements in a linked listint_t list
 * @h: pointer to list's head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
