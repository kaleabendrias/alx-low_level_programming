#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table
 *         NULL if something went wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *shash_table;
    unsigned long int i;

    shash_table = malloc(sizeof(shash_table_t));
    if (shash_table == NULL)
        return NULL;

    shash_table->size = size;
    shash_table->array = malloc(sizeof(shash_node_t *) * size);
    if (shash_table->array == NULL)
    {
        free(shash_table);
        return NULL;
    }

    for (i = 0; i < size; i++)
        shash_table->array[i] = NULL;

    shash_table->shead = NULL;
    shash_table->stail = NULL;

    return shash_table;
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to add or update
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *node;

    if (ht == NULL || key == NULL || *key == '\0')
        return 0;

    index = key_index((unsigned char *)key, ht->size);

    node = ht->array[index];
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
        {
            free(node->value);
            node->value = strdup(value);
            if (node->value == NULL)
                return 0;
            return 1;
        }
        node = node->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return 0;
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    /* Insert new node into the sorted list */
    if (ht->shead == NULL)
    {
        ht->shead = new_node;
        ht->stail = new_node;
    }
    else if (strcmp(key, ht->shead->key) < 0)
    {
        new_node->snext = ht->shead;
        ht->shead->sprev = new_node;
        ht->shead = new_node;
    }
    else
    {
        node = ht->shead;
        while (node->snext != NULL && strcmp(key, node->snext->key) > 0)
            node = node->snext;

        new_node->sprev = node;
        new_node->snext = node->snext;

        if (node->snext != NULL)
            node->snext->sprev = new_node;
        else
            ht->stail = new_node;

        node->snext = new_node;
    }

    return 1;
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The sorted hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the element,
 *         or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (ht == NULL || key == NULL || *key == '\0')
        return NULL;

    index = key_index((unsigned char *)key, ht->size);

    node = ht->array[index];
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
            return node->value;
        node = node->next;
    }

    return NULL;
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;

    if (ht == NULL)
        return;

    printf("{");
    node = ht->shead;
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        if (node->snext != NULL)
            printf(", ");
        node = node->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The sorted hash table to print in reverse
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;

    if (ht == NULL)
        return;

    printf("{");
    node = ht->stail;
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        if (node->sprev != NULL)
            printf(", ");
        node = node->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *node, *tmp;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            tmp = node;
            node = node->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
        }
    }

    free(ht->array);
    free(ht);
}
