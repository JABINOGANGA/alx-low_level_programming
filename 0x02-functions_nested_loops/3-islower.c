#include "main.h"

/**
 * _islower - where the excecution begins
 * @al: the varaible character
 *
 * Description: checking for lower characters in the ASCII table 
 *
 * Return: 1 if true and 0 if false
 */

int _islower(int al)
{
	if (al >= 97 && al <= 122)
		return (1);
	else
		return (0);
}
