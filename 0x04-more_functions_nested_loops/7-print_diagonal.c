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
	int rows, numLines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= n; rows++)
		{
			if (rows > 1)
			{
				for (numLines = 1; numLines <= rows - 1; numLines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
