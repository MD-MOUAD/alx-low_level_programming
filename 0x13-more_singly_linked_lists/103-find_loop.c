#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Head of the list
 *
 * Return: Node when start the loop
 **/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list = head;

	while (list != NULL)
	{
		if (list <= list->next)
			return (list->next);

		list = list->next;
	}
	return (NULL);
}
