#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index of a listint_t linked list.
 * @head: double pointer to listint_t.
 * @index: the index of the node that should be deleted
 * index starts at 0.
 * Return: 1 if it succeeded or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list, *tmp;
	unsigned int i;

	list = *head;

	for (i = 0; list != NULL; i++)
	{
		if (i == index)
		{
			tmp = list->next;
			free(list);
			list = tmp;
			return (1);
		}
		list = list->next;
	}
	return (-1);
}
