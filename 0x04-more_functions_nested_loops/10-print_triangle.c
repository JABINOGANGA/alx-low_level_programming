#include "main.h"

/**
 * print_triangle - execution starting point
 *
 * @size:the value
 *
 * Description: the function will print a triangle
 *
 * Return: no value
 */

void print_triangle(int size)
{
	int rows, hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (space = size - rows; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= rows; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
