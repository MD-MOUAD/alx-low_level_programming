#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list.
 * @head: double pointer to the head of the list
 * @str: a pointer to new node
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *l;

	if (str == NULL || head == NULL)
		return (NULL);
	l = malloc(sizeof(list_t));
	if (l == NULL)
		return (NULL);

	l->str = malloc(sizeof(strlen(str) + 1));
	if (l->str == NULL)
	{
		free(l);
		return (NULL);
	}
	l->str = strdup(str);
	l->len = strlen(str);
	l->next = NULL;

	l->next = *head;
	*head = l;
	return (l);
}
