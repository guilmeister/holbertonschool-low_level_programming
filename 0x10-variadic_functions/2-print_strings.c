#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all string arguments passed
 *
 * @separator: character given to separate numbers
 * @n: limit
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *printstring;
	va_list arguments;

	va_start(arguments, n);


	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printstring = va_arg(arguments, char *);

			if (printstring == '\0')
				printf("(nil)");
			else
				printf("%s", printstring);
		}

		if (i != n - 1)
		{
			printf("%c", *separator);
			printf(" ");
		}

	}

	printf("\n");
	va_end(arguments);

}
