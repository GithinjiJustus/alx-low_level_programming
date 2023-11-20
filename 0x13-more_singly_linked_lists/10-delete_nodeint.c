#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to delete.
 *
 * Return: On success - 1, On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	listint_t *current = *head;
	listint_t *temp = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (unsigned int i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
