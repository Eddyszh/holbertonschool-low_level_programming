#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to structure
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
