#include "lists.h"
/**
 * free_listint_safe - free linked list
 * @h: pointer to the first node
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	int b;
	listint_t *t;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			a++;
		}
		else
		{
			free(*h);
			*h = NULL;
			a++;
			break;
		}
	}
		*h = NULL;
		return (a);
}
