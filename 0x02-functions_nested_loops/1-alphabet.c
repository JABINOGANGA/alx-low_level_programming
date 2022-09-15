#include "main.h"

/**
 * print_alphabet - where the excecution begins
 *
 * Description: the function prints alphabets in lower case
 *
 * Return:has no return value
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
