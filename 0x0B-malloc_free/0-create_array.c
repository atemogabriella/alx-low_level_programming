#include "main.h"
#include "stdlib.h"
#include <stddef.h>
/**
 *create_array - area storing the base
 *unsigned int size: this is the size of array
 *@c: the character  variable declared
 *@size: size number of the array in the array size
 *Return: 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int y;
	size = 0;

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < size; y++)
	{
		ptr[y] = c;
	}
	return (ptr);
}
