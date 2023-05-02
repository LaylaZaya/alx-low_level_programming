#include "lists.h"
/**
 * pop_listint -the head node of a linked list need to be deleted.
 * @head: head of a list.
 *
 * Return: the datainside the element that was deleted.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
