#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
  * print_all - Prints anything
  * @format: The list of argument types passed to the function
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	int r = 0;
	char *s, *sep = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format != NULL && format[r])
		{
			switch (format[r])
			{
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 's':
					s = va_arg(args, char*);

					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					r++;
					continue;
			}
			sep = ",";
			r++;
		}
	}
	va_end(args);
	printf("\n");
}


