#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to struct
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_l;

	if (!head)
		return;
	while (head != NULL)
	{
		free_l = head->next;
		free(head);
		head = free_l;
	}
}
