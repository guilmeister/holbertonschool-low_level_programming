#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{

char word;
char biggerword;

for (word = 'a'; word <= 'z'; word++)
{

putchar (word);

}

for (biggerword = 'A'; biggerword <= 'Z'; biggerword++)

{

putchar (biggerword);

}

putchar ('\n');

return (0);
}
