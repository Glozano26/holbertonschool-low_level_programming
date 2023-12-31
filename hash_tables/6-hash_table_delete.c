#include "hash_tables.h"
/**
  *hash_table_delete - function that deletes a hash table.
  *@ht: the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
	item = ht->array[i];
		while (item != NULL)
		{
			hash_node_t *next = item->next;

			free(item->key);
			free(item->value);
			free(item);
			item = next;
		}
	}
	free(ht->array);
	free(ht);
}

