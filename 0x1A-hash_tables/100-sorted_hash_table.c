#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht = malloc(sizeof(shash_table_t));

    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key, string
 * @value: The value corresponding to a key
 *
 * Return: 1 if success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    unsigned long int index = key_index((unsigned char *)key, ht->size);
    shash_node_t *new_node = malloc(sizeof(shash_node_t));

    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    if (ht->shead == NULL)
    {
        ht->shead = new_node;
        ht->stail = new_node;
        new_node->sprev = NULL;
        new_node->snext = NULL;
    }
    else
    {
        shash_node_t *current = ht->shead;
        while (current)
        {
            if (strcmp(new_node->key, current->key) < 0)
            {
                new_node->sprev = current->sprev;
                new_node->snext = current;
                if (current->sprev)
                    current->sprev->snext = new_node;
                else
                    ht->shead = new_node;
                current->sprev = new_node;
                break;
            }
            current = current->snext;
        }

        if (current == NULL)
        {
            new_node->sprev = ht->stail;
            new_node->snext = NULL;
            ht->stail->snext = new_node;
            ht->stail = new_node;
        }
    }

    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The sorted hash table
 * @key: The key you are looking for
 *
 * Return: The value associated with the element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    unsigned long int index = key_index((unsigned char *)key, ht->size);
    shash_node_t *current = ht->array[index];

    while (current)
    {
        if (strcmp(key, current->key) == 0)
            return (current->value);
        current = current->next;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    if (ht == NULL)
        return;

    shash_node_t *current = ht->shead;

    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    if (ht == NULL)
        return;

    shash_node_t *current = ht->stail;

    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->sprev;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    if (ht == NULL)
        return;

    shash_node_t *current, *temp;
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current)
        {
	temp = current;
   

