#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list
 * @head: pointer to pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
