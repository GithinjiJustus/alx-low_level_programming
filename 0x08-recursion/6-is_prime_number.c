#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * @i: The divisor to be checked.
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_number(int n, int i)
{
	if (n < 2)
		return (0);
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime_number(n, i + 1));
}
