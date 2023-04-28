#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Head of the list
 * @str: New value for the node
 *
 * Return: Return the new node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	/* if the list is empty set the head to the new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	/* Otherwise find the last node in the list and add new node */
	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;
	return (*head);
}
