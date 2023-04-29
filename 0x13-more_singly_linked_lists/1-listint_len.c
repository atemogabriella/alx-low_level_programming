#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to head of linked list
 * Return: number of elements in linked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
