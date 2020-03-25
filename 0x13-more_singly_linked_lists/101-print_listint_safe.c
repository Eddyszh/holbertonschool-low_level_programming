#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to structure
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i;

	for (i = 0; head; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head - head->next > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			break;
		}
	}
	return (i);
}
