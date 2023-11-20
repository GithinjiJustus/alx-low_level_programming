#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *temp; = NULL; /** Declaration at the start of the block */

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
