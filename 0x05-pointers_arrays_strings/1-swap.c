#include "holberton.h"

/**
 * swap_int - swaps the value of a and b
 *
 * @a: value from main
 * @b: value from main
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{

int temp = *b;
*b = *a;
*a = temp;

}
