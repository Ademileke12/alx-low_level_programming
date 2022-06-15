#include "main.h"

/**
 * base10 -power in 10 base
 * @n: an exponent
 * Return: returns 10 - to power exponent
 */
int base10(int n)
{
	int b = 10;

	while (n > 0)
	{
		b *= 10;
		n--;
	}
	return (b);
}

/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int expon;

	expon = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');


	else
	{
		while (n / expon == 0)
			expon /= 10;

		while (expon >= 1)
		{
			_putchar((n / expon) + '0');
			n %= expon;
			expon /= 10;
		}
	}
}
