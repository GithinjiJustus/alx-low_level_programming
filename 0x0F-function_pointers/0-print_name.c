#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a character array (string) containing the name
 * @f: function pointer to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
