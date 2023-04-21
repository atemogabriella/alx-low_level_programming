#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
  * print_strings - prints strings
  * @separator: string printed between strings
  * @n: number of strings
  * Return: strings printed
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j = 0;
	char *s;

	if (n > 0)
	{
		va_start(args, n);
	}

	for (j = 0; j < n; j++)
	{
		s = va_arg(args, char*);

		if (s == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", s);
		if (j != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	j++;
	va_end(args);
	printf("\n");
}
