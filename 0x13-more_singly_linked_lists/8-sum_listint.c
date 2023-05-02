#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data included in listint_t list
 * @head: head of a list
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
