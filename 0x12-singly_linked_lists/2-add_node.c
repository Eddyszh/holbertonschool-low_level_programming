#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to structure
 * @str: pointer to constant char
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (*head[0] == NULL)
		return (NULL);

	while (str[i])
		i++;
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
