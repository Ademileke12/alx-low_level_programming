#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line
 * @s: an input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0, i = 0;
	char alx;

	while (s[length] != '\0')
		length++;

	while (i < length--)
	{
		alx = s[i];
		s[i++] = s[length];
		s[length] = alx;
	}
}
