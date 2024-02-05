#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key string
 * @size: The size of the array of the hash table
 *
 * Description: Uses the djb2 hash function to compute the index
 *              at which the key/value pair should be stored in the array
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_code;
    unsigned long int index;

    /* Compute the hash code using the djb2 algorithm */
    hash_code = hash_djb2(key);

    /* Compute the index using modulo operation */
    index = hash_code % size;

    return (index);
}
