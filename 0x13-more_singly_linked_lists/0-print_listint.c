#include "lists.h"
/**
 * print_listint - print all elements of list
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}
	return (m);
}
