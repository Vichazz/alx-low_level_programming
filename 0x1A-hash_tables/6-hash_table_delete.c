#include "hash_tables.h"

/**
 * hash_table_delete - function that delete a hash table
 * @ht: type pointer of the hash_tabe
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int n;
hash_table_t *head = ht;
hash_node_t *node, *temp;

for (n = 0; n < ht->size; n++)
{
if (ht->array[n] != NULL)
{
node = ht->array[n];
while (node != NULL)
{
temp = node->next;
free(node->key);
free(node->value);
free(node);
node = temp;
}
}
}
free(head->array);
free(head);
}
