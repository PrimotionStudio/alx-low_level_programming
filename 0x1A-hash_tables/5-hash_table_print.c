#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, startflag = 1;
	hash_node_t *my_hn;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
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
			if (startflag == 1)
			{
				printf("'%s': '%s'", my_hn->key, my_hn->value);
				startflag = 0;
			}
			else
				printf(", '%s': '%s'", my_hn->key, my_hn->value);
			my_hn = my_hn->next;
		}
		i++;
	}
	printf("}\n");
}
