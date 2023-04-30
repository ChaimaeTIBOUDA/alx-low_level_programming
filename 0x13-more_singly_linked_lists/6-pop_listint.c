#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: first element
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int m;

	if (!head || !*head)
		return (0);
	m = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (m);
}
