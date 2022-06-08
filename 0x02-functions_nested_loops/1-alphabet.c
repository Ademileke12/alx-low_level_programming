#include "main.h"

/**
 * print_alphabet -print lower case alphabet
 * Description: prints lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}

	_putchar('\n');
}
