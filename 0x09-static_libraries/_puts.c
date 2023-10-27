#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: The string to be printed
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
