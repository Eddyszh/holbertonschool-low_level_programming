#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to strucuture
 * @idx: unsigned int where the new node should be added
 * @n: int
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || *head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = temp;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
