#include "main.h"

/**
 * print_alphabet_x10
 * Description: function uses _putchar function to print
 * alphabet in lowercases 10 times
 * Return: Nothing.
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
