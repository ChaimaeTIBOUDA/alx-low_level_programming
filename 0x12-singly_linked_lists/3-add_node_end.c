#include "lists.h"
/**
 * add_node_end - add new node to the end of list_t
 * @head: double pointer
 * @str:string to put at the end
 * Return: addres of new elem
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int l = 0;

	while (str[l])
		l++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = l;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (t->next)
		t = t->next;
	t->next = n;
	return (n);
}
