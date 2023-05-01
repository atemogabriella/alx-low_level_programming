#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes head node of a listint_t list
 * @head: pointer to pointer to first head node of linked list
 * Return: data of deleted head node or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int d;

	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	d = temp->n;
	*head = (*head)->next;
	free(temp);

	return (d);
}
