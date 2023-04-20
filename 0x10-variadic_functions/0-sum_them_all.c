#include "variadic_functions.h"
/**
  * sum_them_all - function that returns sum of all integers
  * @n: number of integer arguments passed to function
  * Return: sum of integers
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int z = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);
	}

	for (z = 0; z < n; z++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
