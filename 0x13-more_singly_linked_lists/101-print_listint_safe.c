#include "lists.h"
size_t looped_listint_len(const listint_t *head);
/**
 * print_listint_safe - print list
 * @head: pointer to the first node
 * Return: -0 or unique nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m;
	size_t i = 0;

	m = looped_listint_len(head);
	if (m == 0)
	{
		for (; head != NULL; m++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
		}
	}
	else
	{
		for (i = 0; i < m; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (m);

}
/**
 * looped_listint - how many unque node
 * @head: pointer to the first node
 * Return: -0 or nodes
 */
size_t looped_listint_len(const listint_t *head)
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
