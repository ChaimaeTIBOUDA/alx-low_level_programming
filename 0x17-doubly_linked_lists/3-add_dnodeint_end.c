#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: head
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *h;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = a;
	}
	else
		*head = a;
	a->prev = h;
	return (a);
}
