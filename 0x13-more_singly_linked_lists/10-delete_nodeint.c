#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at the index of a linked list
 * @head: pointer to the pointer t head of linked list
 * @index: index of deleted node
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int s;

	listint_t *current, *prev;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = *head;
	current = (*head)->next;
	for (s = 1; current != NULL && s < index; s++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}

