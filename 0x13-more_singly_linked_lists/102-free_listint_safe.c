#include "lists.h"

/**
 * free_listint_safe - frees a linked list with loop
 * @h: pointer to list's node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t zen = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			zen++;
		}
		else
		{
			free(*h);
			*h = NULL;
			zen++;
			break;
		}
	}

	*h = NULL;

	return (zen);
}
