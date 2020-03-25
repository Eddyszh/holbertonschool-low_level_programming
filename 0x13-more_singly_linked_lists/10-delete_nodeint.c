#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to pointer to strucuture
 * @index: unsigned int where the new node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *old = *head;
	listint_t *temp = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (old == NULL || old->next == NULL)
			return (-1);
		old = old->next;
	}
	temp = old->next;
	old->next = temp->next;
	free(temp);
	return (1);
}
