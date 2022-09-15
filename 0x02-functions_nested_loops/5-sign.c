#include "main.h"
/**
 * print_sign - Gives 1 if n is positive
 * gives 0 if n is zero -1 if n is negative
 *
 * @n: the input number is an integer
 *
 * Return: 1 is greater than zero. 0 is zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}