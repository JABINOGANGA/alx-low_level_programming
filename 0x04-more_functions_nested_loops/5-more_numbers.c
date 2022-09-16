#include "main.h"

/**
 * more_numbers - where execution starts
 *
 * Description: the functions 0 to 14 ten times
 *
 * Return: Retuns nothing
 */

void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num / 10 != 0)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
