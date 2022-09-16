#include "main.h"

/**
 * _isdigit - where execution commences
 *
 * @c: the checked value
 *
 * Description: the function checks for a digit
 *
 * Return: 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
