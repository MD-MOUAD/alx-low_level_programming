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
	char *s;
	unsigned int len;

	if (h == 0)
		return (0);

	while (h != NULL)
	{
		s = h->str;
		len = h->len;
		if (s == NULL)
		{
			s = "(nil)";
			len = 0;
		}
		printf("[%u] %s\n", len, s);
		h = h->next;
		node++;
	}
	return (node);
}
