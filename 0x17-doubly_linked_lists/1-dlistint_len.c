#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to struct
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
