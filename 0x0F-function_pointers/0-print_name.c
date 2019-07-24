#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - pass the name to the function
 *
 * @name: name to be copied
 * @f: function passed
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}
