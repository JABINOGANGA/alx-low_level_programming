#include "main.h"
/**
 * *_memset - this function fills the first n bytes of
 * the memory area pointed to by s.
 *
 * @b: constant b
 * @n: bytes
 * @s: pointer to the memory area
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
