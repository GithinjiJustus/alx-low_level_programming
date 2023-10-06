#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			write(1, &letter, 1);
		letter++;
	}
	write(1, "\n", 1);
	return (0);
}
