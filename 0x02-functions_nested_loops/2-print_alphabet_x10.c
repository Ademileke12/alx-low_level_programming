#include "main.h"

/**
 * print _10 times the alphabet, in lowercase
 * Description: Prints 10times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 0; i < 11; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}

	_putchar('\n');
}
