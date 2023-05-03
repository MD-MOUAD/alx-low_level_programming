#include "lists.h"
/**
 * print_listint - a function that prints a listint_t linked list
 * This function can print lists with a loop.
 * @head: head of the list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int i, flag;

	if (head == NULL)
		return (0);

	for (i = flag = 0; head != NULL || flag; i++)
	{
		printf("[%p] %d\n", (void *) head, head->n);

		if (head <= head->next)
		{
			flag = 1;
			break;
		}

		head = head->next;
		flag = 0;
	}

	if (flag)
	{
		head = head->next;
		printf("-> [%p] %d\n", (void *) head, head->n);
		i++;
	}

	return (i);
}
