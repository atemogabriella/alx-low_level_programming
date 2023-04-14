#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 **_calloc - Array memory allocation.
 *@nmemb: member number
 *@size: size of the integer
 *Return: 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char  *w;
	unsigned int b = 0;

	if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}
	w = malloc(sizeof(nmemb) * size);
	if (w == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		w[b] = b + 1;
	}
	return (w);
}
