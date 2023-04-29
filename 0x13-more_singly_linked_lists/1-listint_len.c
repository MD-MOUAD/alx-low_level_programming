#include "lists.h"
/**
 * listint_len - a function that returns the number of
 * elements in a linked list.
 * @h: a list_t list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *l = h;
	while (l != NULL)
	{
		len++;
		l = l->next;
	}
	return (len);
}
