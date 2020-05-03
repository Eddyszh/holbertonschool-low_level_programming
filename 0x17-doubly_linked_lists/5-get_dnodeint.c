#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to struct
 * @index: index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	while (index > 0)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		index--;
	}
	return (temp);
}
