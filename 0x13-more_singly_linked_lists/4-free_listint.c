#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to strucuture
 */
void free_listint(listint_t *head)
{
	listint_t *f_list;

	while (head != NULL)
	{
		f_list = head->next;
		free(head);
		head = f_list;
	}
}
