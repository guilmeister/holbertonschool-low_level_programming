#include "holberton.h"

/**
 * rev_string - string in reverse
 *
 * @s: value from main
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
char tmp;
char *start = s;

while (*s != '\0')
{
s++;
}

start--;

while (start <= s)
{
tmp = *start;
*start = *s;
*s = tmp;
start++;
s--;
}

}
