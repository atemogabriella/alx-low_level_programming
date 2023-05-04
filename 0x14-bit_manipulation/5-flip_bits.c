#include "main.h"
#include <stdio.h>
/**
 * flip_bits - Returns number of bits needed to be flipped
 * @n: this the first number
 * @m: this is the second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
