/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return _is_palindrome(s, 0, len - 1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _is_palindrome - helper function to check if a string is a palindrome
 * @s: string to check
 * @start: start index
 * @end: end index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int _is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_is_palindrome(s, start + 1, end - 1));
}
