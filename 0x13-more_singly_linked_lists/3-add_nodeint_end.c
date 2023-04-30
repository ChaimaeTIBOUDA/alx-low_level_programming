#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of list
 * @head: pointer to the first element in the list
 * @n: data
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *d;
	listint_t *t = *head;

	d = malloc(sizeof(listint_t));
	if (!d)
	{
		return (NULL);
	}
	d->n = n;
	d->next = NULL;
	if (*head == NULL)
	{
		*head = d;
		return (d);
	}
	while (t->next)
		t = t->next;
	t->next = d;
	return (d);
}
