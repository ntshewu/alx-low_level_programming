#include "lists.h"

/**
 * dlistint_len - returns nr of elments in a linked dlistint_t list.
 * @h: points to the list.
 * Return: nr of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
