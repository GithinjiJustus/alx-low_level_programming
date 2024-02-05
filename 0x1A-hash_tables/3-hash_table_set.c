#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key/value to
 * @key: The key string
 * @value: The value associated with the key
 *
 * Description: Adds the key/value pair to the hash table.
 *              In case of collision, adds the new node at the beginning of the list.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node = NULL;
    hash_node_t *head = NULL;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    /* Compute the index for the given key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists, if so update the value */
    head = ht->array[index];
    while (head != NULL)
    {
        if (strcmp(head->key, key) == 0)
        {
            /* Update the value */
            free(head->value);
            head->value = strdup(value);
            if (head->value == NULL)
                return (0);
            return (1);
        }
        head = head->next;
    }

    /* Key does not exist, create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Insert the new node at the beginning of the list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
