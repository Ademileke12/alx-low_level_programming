#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: name of person
 * @f: function of pointer to void
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
