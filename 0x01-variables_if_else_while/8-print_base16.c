#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: 0 for success
 */
int main(void)
{
	char al;
	int num;

	for (num = 48; num <= 57; num++)
	{
	putchar(num);
	}
	for (al = 'a'; al <= 'f'; al++)
	{
	putchar(al);
	}
	putchar(10);

	return (0);
}
