#include "lists.h"
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
	listint_t *new, *l, *p;
	int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	l = *head;
	p = NULL;

	if (idx == 0)
	{
		new->next = l;
		l = new;
		return (new);
	}

	for (i = 0; i < idx; i++)
	{
		if (l->next != NULL)
		{
			p = l;
			l = l->next;
		}
		else
			return (NULL);
	}
	/* p now is the (idx - 1)th node, and new will be inserted after it */
	/* l now is the (idx)th node, and new will be inserted before it */
	p->next = new;
	new->next = l;
	return (new);
}
