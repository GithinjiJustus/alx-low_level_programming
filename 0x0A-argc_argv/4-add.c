#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed
 * @argv: Array of argument strings
 *
 * Return: 0 if successful, 1 if there are no arguments or
 * if non-digit characters are present
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *num_str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num_str = argv[i];
		while (*num_str)
		{
			if (*num_str < '0' || *num_str > '9')
			{
				printf("Error\n");
				return (1);
			}
			num_str++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
