#include "main.h"
#include <stdio.h>
/**
 * get_bit - Return s value of a bit at given index
 * @n: num to check bit value
 * @index: index of the bit to be checked
 * Return: value of bit at index or -1 if error was present
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
