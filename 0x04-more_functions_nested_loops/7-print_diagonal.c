#include "main.h"

/**
 * print_diagonal - where execution starts
 *
 * @n: number of \\ to be printed
 *
 * Description: draws a diagonal line on the terminal
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}