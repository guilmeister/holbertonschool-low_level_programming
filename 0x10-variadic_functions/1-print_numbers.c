#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all arguments passed
 *
 * @separator: character given to separate numbers
 * @n: limit
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int printnum;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printnum = va_arg(arguments, int);
			printf("%d", printnum);
		}

		if (i != n - 1)
		{
			printf("%c", *separator);
			printf(" ");
		}
	}

	printf("\n");

}
