#include "main.h"
/**
 * _isupper -Excecution of code begins here
 *
 * @l: character
 *
 * Return: 1 if true  and -1 if false
 */

int _isupper(int l)
{

	if (l >= 'A' && l <= 'Z')
		return (1);
	else
		return (0);
}
