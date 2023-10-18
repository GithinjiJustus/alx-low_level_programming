#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char letter, offset;

	while (*ptr)
	{
		letter = *ptr;

		if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		{
			offset = (letter >= 'a' && letter <= 'z') ? 'a' : 'A';
			*ptr = ((letter - offset + 13) % 26) + offset;
		}

		ptr++;
	}

	return (str);
}
