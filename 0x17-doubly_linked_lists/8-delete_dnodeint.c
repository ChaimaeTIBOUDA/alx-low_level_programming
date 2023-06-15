#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes the node at index index of a list
 * @head: pointer to the head
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int i = 0;

	head1 = *head;
	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;
	while (head1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;
				if (head1->next != NULL)
					head1->next->prev = head2;
			}
			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		i++;
	}
	return (-1);
}
