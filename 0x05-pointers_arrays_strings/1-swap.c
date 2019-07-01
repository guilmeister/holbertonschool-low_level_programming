#include "holberton.h"

/**
 * swap_int - swaps the given values
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
