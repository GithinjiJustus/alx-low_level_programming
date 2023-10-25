/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number
 *
 * Return: natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function for finding square root
 * @n: input number
 * @guess: current guess for square root
 *
 * Return: natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (_sqrt_helper(n, guess + 1));
}
