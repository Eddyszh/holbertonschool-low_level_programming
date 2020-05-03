#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to pointer to struct
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old = *head;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = old->next;
		if (*head)
			(*head)->prev = NULL;
		free(old);
		return (1);
	}
	while (index > 0)
	{
		old = old->next;
		index--;
	}
	if (!old)
		return (-1);
	old->prev->next = old->next;
	if (old->next)
		old->next->prev = old->prev;
	free(old);
	return (1);
}
