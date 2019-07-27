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

	if (n == 0)
		return;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printnum = va_arg(arguments, int);
		printf("%d", printnum);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
