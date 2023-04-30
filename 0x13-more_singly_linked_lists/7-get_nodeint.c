#include "lists.h"
/**
 * get_nodeint_at_index - return number node of list
 * @head: list
 * @index: index of node
 * Return: pointet to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = head;

	while (t && i < index)
	{
		t = t->next;
		i++;
	}
	return (t ? t : NULL);
}
