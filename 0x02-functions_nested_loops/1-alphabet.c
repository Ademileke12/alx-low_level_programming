#include "main.h"

/**
 * main -  prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
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
