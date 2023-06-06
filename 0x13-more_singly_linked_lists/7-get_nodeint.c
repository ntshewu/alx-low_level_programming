#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list
 * @head: pointer list's head
 * @index: the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *node;

	if (!head)
		return (NULL);

	node = head;
	while (n < index)
	{
		if (!node)
			return (NULL);
		node = node->next;
		n++;
	}
	return (node);
}
