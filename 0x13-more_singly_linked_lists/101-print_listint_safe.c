#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list
 * This function can print lists with a loop.
 * @head: a pointer to listint_t list.
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t n = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void*)head, head->n);
		n++;
		current = head;
		head = head->next;
		if (current <= head)
		{
			printf("-> [%p] %d\n", (void*)head, head->n);
			exit(98);
		}
	}

	return (n);
}
