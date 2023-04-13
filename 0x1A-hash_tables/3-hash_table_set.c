#include "hash_tables.h"

/**
 * hash_table_set - add an element at the hash table
 * @ht: Type pointer to the hash table
 * @key: Type const char pointer of the key
 * @value: Value of the key
 * Return: 0 if fail or 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i, id;
char *copy_value;
hash_node_t *new_htable;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

copy_value = strdup(value);
if (copy_value == NULL)
return (0);

id = key_index((const unsigned char *)key, ht->size);
for (i = id; ht->array[i]; ++i)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = copy_value;
return (1);
}
}
new_htable = malloc(sizeof(hash_node_t));
if (new_htable == NULL)
{
free(copy_value);
return (0);
}
new_htable->key = strdup(key);
if (new_htable->key == NULL)
{
free(new_htable);
return (0);
}
new_htable->value = copy_value;
new_htable->next = ht->array[id];
ht->array[id] = new_htable;

return (1);
}
