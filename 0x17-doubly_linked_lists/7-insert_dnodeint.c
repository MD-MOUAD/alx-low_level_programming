#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the list
 * @idx: the position to insert the new node
 * @n: data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next_node, *l = *h;
	unsigned int index = 0;

	if (idx == 0)
		add_dnodeint(&(*h), n);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	while (l)
	{
		next_node = l->next;
		index++;
		if (idx == index)
		{
			l->next = new;
			new->prev = l;
			if (next_node)
				next_node->prev = new;
			return (new);
		}
		l = l->next;
	}
	free(new);
	return (NULL);

}
