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
	char *s;
	list_t *l;

	s = strdup(str);
	l = malloc(sizeof(list_t));
	if (l == NULL || str == NULL || head == NULL)
		return (NULL);

	else
	{

		l->str = s;
		l->len = strlen(s);
		l->next = NULL;
	}
	l->next = *head;
	*head = l;
	return (*head);
}
