#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table,
 *         or NULL if an error occurred
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t) * size);
	if (new_ht->array == NULL)
		return (NULL);
	while (i < size)
	{
		new_ht->array[i] = NULL;
		i++;
	}
	return (new_ht);
}
