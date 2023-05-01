#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node
 * @head: pointer to the first node
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *cr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (i < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		i++;
	}
	cr = t->next;
	t->next = cr->next;
	free(cr);
	return (1);
}
