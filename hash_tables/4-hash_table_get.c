#include "hash_tables.h"

/**
 * hash_table_get - function that aretrieves a value associated with a key.
 *
 * @ht: table
 * @key: the key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}
	item = item->next;
	}
	return (NULL);
}
