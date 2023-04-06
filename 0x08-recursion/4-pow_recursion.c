#include "main.h"
/**
 * _pow_recursion - The recursion of power area
 * @x: the value to be powered
 * @y: the power in which the value is to be raised
 *Return: the powered value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 1)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
