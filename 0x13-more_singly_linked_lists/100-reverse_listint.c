#include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: pointer to the first node
 * Return: pointer to the node in list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = pv;
		pv = *head;
		*head = n;
	}
	*head = pv;
	return (*head);
}
