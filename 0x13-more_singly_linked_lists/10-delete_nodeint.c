#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to pointer to strucuture
 * @index: unsigned int where the new node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old = *head;
	listint_t *temp = NULL;

	if (!head)
		return (-1);
	if (index == 0 && *head)
	{
		*head = (*head)->next;
		free(old);
		return (1);
	}
	while (index > 1)
	{
		if (!old || !old->next)
			return (-1);
		old = old->next;
		index--;
	}
	if (old)
	{
		temp = old->next;
		old->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
