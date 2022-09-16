#include "main.h"
/**
 * _isupper -Excecution of code begins here
 *
 * @c: character
 *
 * Return: 1 if true  and -1 if false
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
