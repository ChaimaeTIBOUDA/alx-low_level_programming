#include "lists.h"
/**
 * free_listint2 - free list
 * @head: pointer to the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;
	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}
