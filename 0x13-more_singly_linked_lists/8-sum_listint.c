#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: a listint_t list.
 * Return: the sum of all the data (n) of the list.
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *list;

	list = head;
	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}
	return (sum);
}
