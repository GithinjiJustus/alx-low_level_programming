#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a specified position in a dlistint_t linked list
 * @h: Pointer to the pointer of the head of the list
 * @idx: Index at which the new node should be inserted (starting from 0)
 * @n: Data to be stored in the new node
 * Return: Address of the new node, or NULL if it fails to add the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (idx == 0)
        return add_dnodeint(h, n);

    while (temp != NULL && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->prev = temp;
    new_node->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = new_node;

    temp->next = new_node;

    return new_node;
}
