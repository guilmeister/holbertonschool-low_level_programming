#include "holberton.h"

void more_numbers(void)
{

  int i, x;

  for (x = 1; x <= 10; x++)
    {

      for (i = 0; i <= 14; i++)
	{

      	  if (i > 9)
	      _putchar(i / 10 + '0');

	      _putchar (i % 10 + '0');

	}

      _putchar('\n');

    }

}
