#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at the specified index of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be retrieved (starting from 0)
 * Return: Address of the node at the given index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
