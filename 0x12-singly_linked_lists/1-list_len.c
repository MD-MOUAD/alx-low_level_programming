#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 * @h: the list
 * Return: the number of elements of the list
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
