#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of linked list
 * @head: pointer to a pointer to head of the list
 * @str: string to be duplicated and added to the new node
 * Return: address of new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	/*Allocate memory for new node*/

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/*Duplicate the string*/

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*Set length of the string*/

	for (new_node->len = 0; new_node->str[new_node->len]; new_node->len++)
	;
	/* If the list is empty, make the new node the head*/

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	/*Move to end of list and add a new node*/

	temp_node = *head;
	while (temp_node->next != NULL)
		temp_node = temp_node->next;
	temp_node->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
