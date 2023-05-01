#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Computes the sum of all elements
 * @head: pointer to head node
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int g = 0;

	while (head != NULL)
	{
		g += head->n;
		head = head->next;
	}

	return (g);
}
