#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Head of the list
 *
 * Return: Node when start the loop
 **/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list_slow = head;
	listint_t *list_fast = head;

	while (list_fast != NULL && list_fast->next != NULL)
	{
		list_slow = list_slow->next;
		list_fast = list_fast->next->next;

		if (list_slow == list_fast)
		{
			list_slow = head;
			while (list_slow != list_fast)
			{
				list_slow = list_slow->next;
				list_fast = list_fast->next;
			}
			return (list_fast);
		}
	}
	return (NULL);
}
