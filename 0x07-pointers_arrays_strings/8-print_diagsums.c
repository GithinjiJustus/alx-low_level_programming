#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix
 * @a: The square matrix
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diag1, diag2);
}
