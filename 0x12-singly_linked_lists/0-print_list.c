#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	char *next;

	if (h == 0)
		return (0);

	while (h != NULL)
	{
		next = h->str;
		if (next == NULL)
			next = "[0] (nil)";
		printf("[%lu] %s\n", h->len, next);
		h = h->next;
		node++;
	}
	return (node);
}
