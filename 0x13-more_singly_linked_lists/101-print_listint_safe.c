#include "lists.h"
/**
 * print_listint_safe - print list
 * @head: pointer to the first node
 * Return: -0 or unique nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *a, *b;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	a = head->next;
	b = (head->next)->next;
	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				n++;
				a = a->next;
				b = b->next;
			}
			a = a->next;
			while (a != b)
			{
				n++;
				a = a->next;
			}
			return (n);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}
