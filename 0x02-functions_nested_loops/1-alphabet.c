#include "main.h"

/**
 * prints the alphabet, in lowercase, followed by a new line.
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
