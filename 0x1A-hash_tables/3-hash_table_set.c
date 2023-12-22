#include "hash_tables.h"


/**
 * pair_hn - Creates a new hash node with the given key-value pair
 * @key: The key string for the new node
 * @value: The value string associated with the key
 * Return: A pointer to the newly created hash node
 */
hash_node_t *pair_hn(char *key, char *value)
{
	hash_node_t *new_hn;

	new_hn = malloc(sizeof(hash_node_t));
	if (new_hn == NULL)
		return (NULL);
	new_hn->key = strdup(key);
	new_hn->value = strdup(value);
	new_hn->next = NULL;
	return (new_hn);
}

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: The hash table to add the element to
 * @key: The key string for the new element
 * @value: The value string associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int array_index;
	hash_node_t *my_hn = NULL, *prev = NULL;
	char *ky, *val;

	if (ht == NULL)
		return (0);
	ky = (char *)key;
	val = (char *)value;
	array_index = hash_djb2((const unsigned char *)ky) % ht->size;
	my_hn = ht->array[array_index];
	if (my_hn == NULL)
	{
		my_hn = pair_hn(ky, val);
		if (my_hn == NULL)
			return (0);
		ht->array[array_index] = my_hn;
		return (1);
	}
	while (my_hn != NULL)
	{
		/* A key is found: Replace value */
		if (my_hn->key == ky)
		{
			my_hn->value = val;
			return (1);
		}
		prev = my_hn;
		my_hn = my_hn->next;
	}
	my_hn = pair_hn(ky, val);
	if (my_hn == NULL)
		return (0);
	prev->next = my_hn;
	return (1);
}
