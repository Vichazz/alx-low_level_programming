#include "hash_tables.h"

/**
 * hash_table_get - function to get a value of a key in a hash table
 * @ht: type pointer const char of the hash_table
 * @key: type pointer char the key of the hash table
 * Return: Null if the key is not found or the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int id;
hash_node_t *current_node;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

id = key_index((const unsigned char *)key, ht->size);
if (id >= ht->size)
return (NULL);

current_node = ht->array[idx];
while (current_node && strcmp(current_node->key, key) != 0)
current_node = current_node->next;

return ((node == NULL) ? NULL : node->value);
}
