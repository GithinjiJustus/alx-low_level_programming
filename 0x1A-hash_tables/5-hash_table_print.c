#include "hash_tables.h"

/**
 * hash_table_print - Prints all elements of a hash table
 * @ht: Pointer to the hash table structure
 *
 * Description: This function prints all elements of the hash table.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	unsigned int index = 0, temp = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] == NULL)
		{
			index++;
			continue;
		}
		if (temp == 1)
			printf(", ");
		temp = 1;
		ptr = ht->array[index];
		while (ptr)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			if (ptr->next != NULL)
				printf(", ");
			ptr = ptr->next;
		}
		index++;
	}
	printf("}\n");
}
