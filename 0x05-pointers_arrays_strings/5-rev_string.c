#include "holberton.h"

/**
 * rev_string - string in reverse
 *
 * @s: value from main
 *
 * Return: Always 0 (Success)
 */

#include "holberton.h"

void rev_string(char *s)
{

char *begin = s;
char *end = s;
char tmp;
int x;
int length = 0;

while (s[length] != '\0')
length++;

for (x = 0; x < length - 1; x++)
end++;

for (x = 0; x < length / 2; x++)
{
tmp = *end;
*end = *begin;
*begin = tmp;
begin++;
end--;
}

}
