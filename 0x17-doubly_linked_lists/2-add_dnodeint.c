#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of list
 * @head: pointer to the first node
 * @n: value of new elemnt
 * Return: the address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *h;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	a->next = h;
	if (h != NULL)
		h->prev = a;
	*head = a;
	return (a);
}
