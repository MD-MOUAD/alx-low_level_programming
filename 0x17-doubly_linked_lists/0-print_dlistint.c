#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *head = h;

	while (head)
	{
		nodes++;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (nodes);
}
