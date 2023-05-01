#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts new node at a specified position
 * @head: pointer to head of list
 * @idx: the list index where new node is added
 * @n: value to be added to new node
 * Return: address of new node and NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int r;

	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (r = 0; r < idx - 1; r++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}


