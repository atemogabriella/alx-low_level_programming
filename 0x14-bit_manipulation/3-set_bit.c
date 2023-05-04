#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets bit value to 1 at a given index
 * @n: pointer to the numb to be modified
 * @index: index of the bit starting from 0
 * Return: 1 on success or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (-1);
}
