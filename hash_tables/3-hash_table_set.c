#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((unsigned char *)key, ht->size);

    hash_node_t *node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return 0;

    node->key = (char *) key;
    node->value = (char *) value;
    node->next = ht->array[index];
    ht->array[index] = node;

    return 1;
}
