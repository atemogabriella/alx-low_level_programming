#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - Memory allocation area
 *@b: The memory size to be allocated
 *Return: memory allocation area
 */
void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);

	if (z == NULL)
	{
		exit(98);
	}
	return (z);
}
