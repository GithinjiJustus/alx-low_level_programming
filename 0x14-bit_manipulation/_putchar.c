#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: Success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
