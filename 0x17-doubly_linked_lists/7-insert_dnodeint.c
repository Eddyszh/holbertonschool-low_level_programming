#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to struct
 * @idx: index of the list where the new node should be added
 * @n: int value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL && idx > 0)
	{
		temp = temp->next;
		idx--;
	}
	if (!temp && idx > 0)
		return (add_dnodeint_end(h, n));
	else if (temp != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		temp->prev->next = new;
		new->prev = temp->prev;
		temp->prev = new;
		new->next = temp;
		return (new);
	}
	return (NULL);
}
