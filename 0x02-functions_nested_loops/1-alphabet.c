#include "main.h"

/**
 * alphabet_out - where the excecution begins
 *
 * Description: the function prints alphabets in lower case
 *
 * Return:has no return value
 */

void alphabet_out()
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
