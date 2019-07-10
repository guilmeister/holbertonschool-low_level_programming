/**
 * print_diagsums - prints sum of diagonal values
 *
 * @a: value from main
 * @size: value from main
 *
 */

#include <stdio.h>

void print_diagsums(int *a, int size)
{

	int x, y;
	int dsum = 0;
	int isum = 0;
	int area = size * size;

	for (x = 0, y = 0; x < area; x = (x + size + 1), y = (y + size - 1))
	{
		dsum = dsum + a[x];
		isum = isum + a[y];
	}

	printf("%d, %d\n", dsum, isum);
}
