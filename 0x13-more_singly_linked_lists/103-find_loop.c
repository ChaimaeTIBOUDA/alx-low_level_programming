#include "lists.h"
/**
 * find_listint_loop - the loop in list
 * @head: pointer to the first node
 * Return: address of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head;
	listint_t *b = head;

	if (!head)
		return (NULL);
	while (a && b && b->next)
	{
		b = b->next->next;
		a = a->next;
		if (b == a)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (b);
		}
	}
	return (NULL);
}
