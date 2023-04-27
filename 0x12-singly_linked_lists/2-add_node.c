#include "lists.h"
/**
 * add_node - add new node at the beginning of list_t
 * @head: double pointer
 * @str: the string to add
 * Return: add of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while (str[l])
		l++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = l;
	n->next = (*head);
	(*head) = n;
	return (*head);
}
