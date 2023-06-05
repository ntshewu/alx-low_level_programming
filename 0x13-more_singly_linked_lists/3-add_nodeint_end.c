#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to list's end
 * @n: value to input list end to
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (!(*head))
	{
		*head = new_node(n);
		return (*head);
	}

	temp = *head;
	while (temp)
	{
		if (!temp->next)
		{
			new = new_node(n);
			temp->next = new;
			break;
		}
		temp = temp->next;
	}
	return (*head);
}
