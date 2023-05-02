#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 *
 * @head: double pointer to the list.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head, *next;

	*head = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = *head;
		*head = curr;
		curr = next;
	}

	return (*head);
}
