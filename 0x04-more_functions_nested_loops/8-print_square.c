#include "main.h"

/**
 * print_square - where execution starts
 *
 * @size: value inserted
 *
 * Description: the function will print a straight line on the terminal
 *
 * Return: Retuns nothing
 */

void print_square(int m)
{
	int a, b;

	if (m <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= m; a++)
		{
			for (b = 1; b <= m; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
