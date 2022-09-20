#include "main.h"

/**
 * _strlen - function to get the legnth of the string
 * @s: string pointer to passe to be passed to the function 
 * Return : returns the legnth of the string
 */

int _strlen(char *s)
{
	int len;

	for(; *s != '\0'; s++)
	{
		len +=1;
	}

	return (len);
}
