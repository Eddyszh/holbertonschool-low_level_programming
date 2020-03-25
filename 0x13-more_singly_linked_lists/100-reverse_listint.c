#include "lists.h"
/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to pointer to structure
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = cur;
		cur = *head;
		*head = next;
	}
	*head = cur;
	return (*head);
}
