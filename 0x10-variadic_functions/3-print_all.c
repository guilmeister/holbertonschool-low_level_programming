#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all values
 *
 * @format: value from main
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int n = 0;
	char *printstring;
	va_list arguments;

	va_start(arguments, format);
	while (format[n])
		n++;
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arguments, int));
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", va_arg(arguments, double));
			break;
		case 's':
			printstring = va_arg(arguments, char *);
			if (printstring == NULL)
				printstring = "(nil)";
			printf("%s", printstring);
			break;
		}
		if (i != (n - 1) && (format[i] == 'c' || format[i] == 'i' ||
				     format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(arguments);
	printf("\n");
}
