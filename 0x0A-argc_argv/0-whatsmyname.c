#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /** Suppress unused parameter warning */

	printf("%s\n", argv[0]);
	return (0);
}
