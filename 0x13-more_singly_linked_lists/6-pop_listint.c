#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: double pointer to the list.
 * Return: the head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head->next)
	free(tmp);
	return (n);
}
