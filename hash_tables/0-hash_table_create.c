#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long i = 0;
    hash_table_t *table = malloc(size * sizeof(hash_table_t));
    if (table == NULL)
        return NULL;

    table->size = size;
    table->array = malloc(size * sizeof(hash_node_t));
    if (table->array == NULL)
        return NULL;
    
    for(i = 0; i < size; i++)
        table->array[i] = NULL;

    return (table);
}
