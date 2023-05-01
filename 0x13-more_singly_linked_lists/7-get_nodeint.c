#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: pointer to head of linked list
 * @index: index of node to be retrieved
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int b = 0;

	while (current != NULL)
	{
		if (b == index)
			return (current);
		b++;

		current = current->next;
	}
	return (NULL);
	 /* index is not within range*/
}

