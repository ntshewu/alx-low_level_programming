#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of singly list
 * @h: points to lists
 * Return: nodes printed
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
