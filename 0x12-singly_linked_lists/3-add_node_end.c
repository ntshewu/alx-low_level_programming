#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add new node at end of `list_t` list
 * @head: pointer to head
 * @str: string to duplicate
 * Return: Address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *existing;
	list_t *new_node;
	int c;

	existing = *head;
	while (existing && existing->next != NULL)
		existing = existing->next;

	for (c = 0; dup_str[c] != '\0'; c++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;

	if (existing)
		existing->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
