#include "lists.h"

/**
 * print_list - print all elements of singly list
 * @h: header
 * Return: nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		c++;
	}

	return (c);
}
