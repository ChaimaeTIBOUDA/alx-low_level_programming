#include "lists.h"
/**
 * list_len - return number of elements
 * @h: pointer
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
