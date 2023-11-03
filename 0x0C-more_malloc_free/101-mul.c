#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 if successful, 98 if incorrect number of arguments,
 * or 98 if arguments contain non-digit characters.
 */
int main(int argc, char *argv[])
{
	int i, j, carry, num1, num2, result;
	char *res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	if (result < 0)
	{
		printf("Error\n");
		return (98);
	}

	if (result == 0)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}

	res = malloc(sizeof(char) * 11);

	if (res == NULL)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 10; i >= 0; i--)
	{
		carry = result % 10;
		res[i] = carry + '0';
		result = result / 10;
	}

	for (i = 0; i < 11; i++)
	{
		if (res[i] != '0' || i == 10)
		{
			while (i < 11)
			{
				putchar(res[i]);
				i++;
			}
		}
	}

	putchar('\n');
	free(res);

	return (0);
}
