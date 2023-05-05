#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	unsigned int f = 1;
	char *z = (char *)&f;

	if (*z)

		return (1);
	else
		return (0);
}
