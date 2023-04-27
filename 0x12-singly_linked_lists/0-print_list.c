#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: a pointer to head of the list
 * Return: number of nides in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
