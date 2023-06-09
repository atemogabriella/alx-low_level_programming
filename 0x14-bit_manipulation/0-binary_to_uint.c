#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: a pointer to binary string to be converted
 * Return: the converted num or chars that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		r = (r << 1) + (*b - '0');
	}

	return (r);
}
