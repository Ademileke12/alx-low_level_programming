#include "main.h"

/**
 * print_alphabets - this is the function
 *
 * Description: prints from a to z
 * Return: Return
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
