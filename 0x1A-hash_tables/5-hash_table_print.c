#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs in hash table array order.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, c = 0;
	hash_node_t *node;

	if (t == NULL)
		return;
	printf("{");
	for (i = 0; i < t->size; i++)
	{
		if (t->array[i] != NULL)
		{
			node = t->array[i];
			while (node != NULL)
			{
				if (c > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				c++;
			}
		}
	}
	printf("}\n");
}
