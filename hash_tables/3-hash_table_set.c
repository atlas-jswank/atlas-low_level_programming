#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *node;

    if(ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return 0;

    index = key_index((unsigned char *)key, ht->size);

    node = ht->array[index];
    while(node != NULL)
    {    
        if( strcmp(node->key, key) == 0)
        {
            free(node->value);
            node->value = strdup(value);
            return (1);
        }
        node = node->next;

    }
    
    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return 0;

    node->key = (char *) strdup(key);
    node->value = (char *) strdup(value);
    node->next = ht->array[index];
    ht->array[index] = node;

    return 1;
}
