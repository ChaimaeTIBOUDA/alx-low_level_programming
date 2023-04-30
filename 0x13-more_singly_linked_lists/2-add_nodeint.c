#include "lists.h"
/**
 * add_nodeint - add new node at the beginning of list
 * @head: pointer to the first node
 * @n: data to be added
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *d;

	d = malloc(sizeof(listint_t));
	if (!d)
		return (NULL);
	d->n = n;
	d->next = *head;
	*head = d;
	return (d);
}
