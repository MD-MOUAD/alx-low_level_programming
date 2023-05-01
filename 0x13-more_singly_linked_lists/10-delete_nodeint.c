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

	if (index == 0 && *head)
	{
		*head = list->next;
		free(list);
		return (1);
	}
	for (i = 1; list->next != NULL; i++)
	{
		if (i == index)
		{
			tmp = list->next;
			list->next = tmp->next;
			free(tmp);
			return (1);
		}
		list = list->next;
	}
	return (-1);
}
