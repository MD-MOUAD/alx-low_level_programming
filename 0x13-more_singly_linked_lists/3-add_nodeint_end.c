#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a listint_t list.
 * @head: a listint_t list.
 * @n: the element to add.
 * Return: the address of the new element, or NULL if it faile.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *new;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	/* find last node */
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
