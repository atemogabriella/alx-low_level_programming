#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to zero at given index
 * @n: pointer to the number
 * @index: index of the bit to be set from 0
 * Return: 1 on success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	b = 1 << index;
	*n &= ~b;
	return (1);
}
