#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If the linked list is empty - 0, otherwise - the head node’s data.
 */
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	listint_t *temp = *head;
	int data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
