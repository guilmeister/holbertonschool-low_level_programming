#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{

  int s;
  int a;

  for (s = 48; s <= 57; s++)
    {
      for (a = 48; a <= 57; a++)
	{
	  putchar(s);
	  putchar(a);
	  
	  if (s != 57 || a != 57)
	    {
	    putchar(',');
	    putchar(' ');
	    }

	}

    }

  putchar('\n');

  return (0);
}
