#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size, in number of nodes, to make the new hash table.
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *t = malloc(sizeof(hash_table_t));

	if (t == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * size);
	if (t->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	for (; i < size; i++)
		t->array[i] = NULL;
	return (t);
}
