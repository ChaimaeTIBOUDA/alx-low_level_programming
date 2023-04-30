#include "lists.h"
/**
 * sum_listint - return sum of all data
 * @head: pointer first node list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
