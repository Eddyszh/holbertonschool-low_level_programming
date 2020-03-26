#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to structure
 * Return: address where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next = temp;

	for (; temp && next;)
	{
		temp = temp->next;
		next = next->next->next;
		if (temp == next)
		{
			for (next = head; temp != next;
				temp = temp->next, next = next->next)
			{
			}
			return (temp);
		}
	}
	return (0);
}
