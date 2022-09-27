#include "main.h"
/**
 * _strpbrk - searchs a string for any of a set of bytes
 *
 * @s: the string to be  searched
 * @accept: the bytes to look for
 *
 * Return: a pointer to the bytes in @s that matches one of the bytes in
 * @accept, or gives back a  NULL value  if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
