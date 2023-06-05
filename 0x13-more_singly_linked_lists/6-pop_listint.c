#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *			returns the head node’s data
 *@head: pointer to linked list
 * Return: if the linked list is empty return 0
 */
listint(listint_t **head)
{
	int unit;
	listint_t *new_head;

	if (!(*head) || !head)
		return (0);

	new_head = (*head)->next;
	unit = (*head)->n;
	free(*head);
	*head = new_head;

	return (unit);
}
