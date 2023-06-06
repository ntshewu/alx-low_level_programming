#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at listint_t index
 * @head: poiter of list's head
 * @index: node postion to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *node, *pre;

	if (!(*head))
		return (-1);
	n = 0;
	pre = NULL;
	node = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (n == index)
		{
			pre->next = node->next;
			free(node);
			return (1);
		}
		pre = node;
		node = node->next;
		n++;
	}

	return (-1);
}
