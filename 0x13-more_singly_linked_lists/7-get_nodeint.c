#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: pointer to strucuture
 * @index: unsigned int
 * Return: the n node, if no exist 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	while (index > 0)
	{
		if (temp == NULL)
			return (0);
		temp = temp->next;
		index--;
	}
	return (temp);
}
