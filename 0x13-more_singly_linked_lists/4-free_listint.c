#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: pointer to head of list
 * Return: freed list
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem);
	}
}
