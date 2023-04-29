#include "lists.h"
/**
 * print_listint - a function that prints all the elements of
 * a listint_t list
 * @h: a listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		printf("NULL");

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
