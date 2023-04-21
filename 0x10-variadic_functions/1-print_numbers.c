#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
  * print_numbers - prints numbers
  * @separator: string printed between numbers
  * @n: number of printed numbers
  * Return: display of printed numbers
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int q = 0;

	if (n > 0)
	{
		va_start(args, n);
	}

	for (q = 0; q < n; q++)
	{
		printf("%d", va_arg(args, int));
		
		if (q != n - 1 && separator != NULL)
			
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
