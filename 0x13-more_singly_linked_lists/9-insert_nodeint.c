#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function that insert a node at a given position.
 * @head: double pointer to the list
 * @idx: the index of the list where the new node shold be added
 * starting with 0.
 * @n: the data of the node to insert
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	i = 1;
	while (*head != NULL)
	{
		if (i == idx)
		{
			new->next = (*head)->next;
			(*head)->next = new;
			return (new);
		}
		*head = (*head)->next;
	}
	return (NULL);
}
