#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * _sqrt_recursion - recursion square root area
 *@n: The number of guesses
 *Return: the number guessed as th square root
 */
int _sqrt_recursion(int n)
{

	if (n == 1)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (n *_sqrt_recursion(n - 1));
	}
}
