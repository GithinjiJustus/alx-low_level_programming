#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		write(1, &lowercase, 1);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		write(1, &uppercase, 1);
		uppercase++;
	}
	write(1, "\n", 1);
	return (0);
}
