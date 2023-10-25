#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /** If we reach the end of the string */
	{
		_putchar('\n'); /** Print a newline */
		return;
	}

	_putchar(*s); /** Print the current character */
	_puts_recursion(s + 1); /** Recursively call with the next character */
}
