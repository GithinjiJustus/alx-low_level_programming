#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total_length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/** Calculate total length of all arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; /** Add space for newline character */
	}
	/** Allocate memory for the concatenated string */
	str = malloc((total_length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	/** Copy arguments and add newlines */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /** Add newline character */
		k++;
	}

	str[k] = '\0'; /** Add null terminator at the end */
	return (str);
}
