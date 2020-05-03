#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to struct
 * @n: constant int value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
