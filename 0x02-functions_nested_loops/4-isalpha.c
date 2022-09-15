#include "main.h"

/**
 * _isalpha - where excecution begins
 *
 *
 * Description: locating each and every alphabets in the ASCII table
 *
 * Return: 1 if true and 0 if false
 */

int _isalpha(int al)
{
	if (al >= 65 && al <= 122)
		return (1);
	else
		return (0);
}
