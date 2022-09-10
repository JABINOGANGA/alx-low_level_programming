#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the last digit of the number stored in the variable n
 *
 * Return: 0 for success
 */
int main(void)
{
	int al;

	for (al = 48; al <= 57; al++)
	{
	putchar(al);
	if (al != 57)
	{
	putchar(44);
	putchar(32);
	}
	}
	putchar(10);

	return (0);
}
