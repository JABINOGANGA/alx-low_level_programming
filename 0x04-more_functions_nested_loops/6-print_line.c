#include "main.h"

/**
 * print_line - where execution satrts
 *
 * @n: value
 *
 * Description: the function will print a straight line on the terminal
 *
 * Return: 0 (success)
 */

void print_line(int num)
{
	int n;

	if (num > 0)
	{
		for (n = 1; n <= num; n++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
