#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to structure
 */
void free_list(list_t *head)
{
	list_t *f_list;

	while (head != NULL)
	{
		f_list = head->next;
		free(head->str);
		free(head);
		head = f_list;
	}
}
