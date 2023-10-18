#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int power, num, is_negative = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	power = 1;
	num = n;

	while (num > 9)
	{
		power *= 10;
		num /= 10;
	}

	if (is_negative)
		_putchar('-');

	while (power > 0)
	{
		_putchar((n / power) + '0');
		n %= power;
		power /= 10;
	}
}
