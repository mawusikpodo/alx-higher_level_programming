#include <stdbool.h>
#include "lists.h"

/**
 * check_cycle - check for a loop in a linked list
 * @list: listint_t pointer of list
 * Return: 0 if no cycle or 1 if there is cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (1);
		}
	}

	return (0);
}
