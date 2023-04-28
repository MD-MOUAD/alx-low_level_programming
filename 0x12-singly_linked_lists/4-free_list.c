#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list_t list
 * @head: Start of the list
 * Return: (void)
 */
void free_list(list_t *head)
{
	list_t *tmp;
	if (head == NULL)
		return;
	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->str != NULL)
			free(tmp->str);

		tmp = tmp->next;
	}
	free(head);
}

