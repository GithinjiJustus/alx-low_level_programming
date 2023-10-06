#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		write(1, &lowercase, 1);
		lowercase++;
	}
	write(1, "\n", 1);
	return (0);
}
