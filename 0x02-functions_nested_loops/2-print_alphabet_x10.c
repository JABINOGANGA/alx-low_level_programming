#include "main.h"

/**
 * print_alphabet_x10 - the function print 10 times the alphabet, in lowercase.
 * Return: returns nothing.
 */

void print_alphabet_x10(void)
{
	int n;
	char al;

	for (n = 0; n < 10; n++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
