#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: a pointer to the list.
 * @index: the index of the node starting at 0.
 * Return: the nth node of the list
 * or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	for (i = 0; i < index; i++)
	{
		if (node->next != NULL)
			node = node->next;
		else
			return (NULL);
	}
	return (node);
}
