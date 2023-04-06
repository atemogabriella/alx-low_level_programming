#include "main.h"
/**
 * factorial - number factorial area
 *@n: variable in which the factorial of itself is to be found
 *Return: factorial of n
 */
int factorial(int n)
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
		return (n * factorial(n - 1));
	}

	return (n);
}
