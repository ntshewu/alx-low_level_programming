#include "lists.h"

/**
 * find_listint_loop -  frees a listint_t list with loop
 * @head: linked list to find
 *
 * Return: the size of the list that was free’d
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *y = head;
	listint_t *z = head;

	if (!head)
		return (NULL);

	while (y && z && z->next)
	{
		z = z->next->next;
		y = y->next;
		if (z == y)
		{
			y = head;
			while (y != z)
			{
				y = y->next;
				z = z->next;
			}
			return (z);
		}
	}

	return (NULL);
}
