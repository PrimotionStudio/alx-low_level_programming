#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its contents
 * @ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *my_hn, *nxt;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		my_hn = ht->array[i];
		if (my_hn == NULL)
		{
			i++;
			continue;
		}
		while (my_hn != NULL)
		{
			nxt = my_hn->next;
			free(my_hn->key);
			free(my_hn->value);
			free(my_hn);
			my_hn = nxt;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
