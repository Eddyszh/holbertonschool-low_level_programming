#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer to structure
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int i;

	for (i = 0; *h;)
	{
		i++;
		if (*h - (*h)->next > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	return (i);
}
