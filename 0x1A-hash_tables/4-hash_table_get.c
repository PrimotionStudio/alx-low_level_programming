#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table
 * @ht: Pointer to the hash table
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int array_index;
	hash_node_t *my_hn;

	array_index = key_index((const unsigned char *)key, ht->size);
	my_hn = ht->array[array_index];
	if (ht == NULL)
		return (NULL);
	while (my_hn != NULL)
	{
		if (strcmp(my_hn->key, key) == 0)
			return (my_hn->value);
		my_hn = my_hn->next;
	}
	return (NULL);
}
