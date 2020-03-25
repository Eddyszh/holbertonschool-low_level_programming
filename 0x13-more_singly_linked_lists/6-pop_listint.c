#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to pointer to strucuture
 * Return: the head node’s data (n), if is empty 0
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp = NULL;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	i = (*head)->n;
	free((*head));
	*head = temp;
	return (i);
}
