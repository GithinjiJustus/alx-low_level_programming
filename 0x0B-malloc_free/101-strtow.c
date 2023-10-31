#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int i, j, k, word_count = 0;
	char **words;

	/** Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	if (word_count == 0)
		return (NULL);

	/** Allocate memory for the array of words */
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++;
			words[k] = malloc((j - i + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				/** Free previously allocated memory on failure */
				while (k > 0)
				{
					k--;
					free(words[k]);
				}
				free(words);
				return (NULL);
			}

			j = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				words[k][j] = str[i];
				i++;
				j++;
			}
			words[k][j] = '\0';
			k++;
		}
		else
			i++;
	}

	words[k] = NULL;
	return (words);
}
