#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: pointer to strucuture
 * Return: the sum of the data, if no exist 0
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
