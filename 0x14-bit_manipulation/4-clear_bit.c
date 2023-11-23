#include "main.h"

/**
 * clear_bit - sets bit value to 0 at index
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: on success 1, -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
