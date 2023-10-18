#include <stdio.h>

/**
 * main -check the code
 *
 * Retrun; Always 0 (Success)
 */
int main(void)
{
	int a[5];
	int *p;

	p = a;

	a[2] = 1024;
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
