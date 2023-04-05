#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int ix, s1 = 0, s2 = 0;

	for (ix = 0; ix < size; ix++)
	{
		s1 += a[ix];
		s2 += a[size - ix - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
