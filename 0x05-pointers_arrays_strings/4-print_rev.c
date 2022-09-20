#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s : the tsringto be reversed
 *
 */

void print_rev(char *s)
{
	int i in n;

	n = 0;
	
	while (s[n] != '\0')
		n++;

	for (i = n-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
}
